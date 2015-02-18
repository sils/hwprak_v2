library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;


entity unite is
	Port(
		LED        : out   std_logic_vector(3 downto 0);
		CLK_66MHZ  : in    std_logic;
		SDA, SCL   : inout std_logic;
		USER_RESET : in    std_logic
	);
end unite;

architecture Behavioral of unite is
	signal duty_cycle : std_logic_vector(15 downto 0);

	signal scl_i   : std_logic;         -- i2c clock line input
	signal scl_o   : std_logic;         -- i2c clock line output
	signal scl_oen : std_logic;         -- i2c clock line output enable, active low
	signal sda_i   : std_logic;         -- i2c data line input
	signal sda_o   : std_logic;         -- i2c data line output
	signal sda_oen : std_logic;

	signal din                              : std_logic_vector(7 downto 0);
	signal dout                             : std_logic_vector(7 downto 0);
	signal cmd_ack                          : std_logic; -- command done
	signal ack_out                          : std_logic;

	-- we ignore those values:
	signal i2c_busy, i2c_al : std_logic;

	-- new cpu signals
	signal instruction : std_logic_vector(15 downto 0);
	signal inM         : std_logic_vector(15 downto 0);
	signal writeM      : std_logic;
	signal outM        : std_logic_vector(15 downto 0);
	signal adressM     : std_logic_vector(14 downto 0);
	signal pc          : std_logic_vector(14 downto 0);

	--signal resetAck : STD_LOGIC;
	signal inMAck : std_logic_vector(15 downto 0);
	signal inMMem : std_logic_vector(15 downto 0);

	signal selectDestination     : std_logic_vector(3 downto 0);
	signal I2CWriteRegisterOut   : std_logic_vector(15 downto 0);
	signal I2CReadRegisterOut    : std_logic_vector(15 downto 0) := "0000000000000000";
	signal I2CReadRegisterEnable : std_logic;
begin
	selectDestination(0) <= '1' when (writeM = '1' and adressM = "000010000000000") else '0'; --0x400
	selectDestination(1) <= '1' when (adressM = "000010000000001") else '0'; --0x401
	selectDestination(2) <= '1' when (adressM = "000010000000010") else '0'; --0x402
	selectDestination(3) <= writeM when (selectDestination(2 downto 0) = "000") else '0';

	pwm : entity work.LEDPWM(Behavioral)
		generic map(WIDTH => 25)
		port map(
			CLK_66MHZ  => CLK_66MHZ,
			LED        => LED,
			duty_cycle => unsigned(duty_cycle(7 downto 0))
		);

	tristate : entity work.tristate(Behavioral)
		port map(
			-- Interface to byte_ctrl
			scl_i   => scl_i,           -- i2c clock line input
			scl_o   => scl_o,           -- i2c clock line output
			scl_oen => scl_oen,         -- i2c clock line output enable, active low
			sda_i   => sda_i,           -- i2c data line input
			sda_o   => sda_o,           -- i2c data line output
			sda_oen => sda_oen,         -- i2c data line output enable, active low

			-- Interface to the outside world
			scl     => SCL,
			sda     => SDA
		);

	instructionMem : entity work.BRAM
		generic map(
			MEM_NAME => "H:\Xilinx\project_4\project_4_5\inst.mem"
		)
		port map(
			Clock       => CLK_66MHZ,
			WriteEnable => '0',
			Address     => pc(9 downto 0),
			WriteData   => (others => '0'),
			ReadData    => instruction
		);

	cpu : entity work.CPU
		port map(inM          => inM,
			     instruction  => instruction,
			     reset        => USER_RESET,
			     outM         => outM,
			     writeM       => writeM,
			     addressM_out => adressM,
			     pc           => pc,
			     clock        => CLK_66MHZ
		);

	DataMem : entity work.BRAM
		generic map(
			MEM_NAME => "H:\Xilinx\project_4\project_4_5\data.mem"
		)
		port map(
			Clock       => CLK_66MHZ,
			WriteEnable => selectDestination(3),
			Address     => adressM(9 downto 0),
			WriteData   => outM,
			ReadData    => inMMem
		);

	I2CWriteRegister : entity work.SimpleRegister(Behavioral)
		port map(
			clock  => CLK_66MHZ,
			reset  => cmd_ack,
			set    => selectDestination(0),
			inval  => outM,
			outval => I2CWriteRegisterOut
		);

	I2CAckRegister : entity work.SimpleRegister(Behavioral)
		port map(
			clock  => CLK_66MHZ,
			reset  => selectDestination(0),
			set    => cmd_ack,
			inval  => "0100000000000000",
			outval => inMAck
		);

	MuxInM : entity work.Mux(Behavioral)
		port map(
			val1   => inMMem,
			val2   => inMAck,
			switch => selectDestination(2),
			outval => inM
		);

	I2CReadRegisterEnableProcess : process(cmd_ack, I2CWriteRegisterOut)
	begin
		if ((cmd_ack = '1') and (I2CWriteRegisterOut(8) = '1')) then
			I2CReadRegisterEnable <= '1';
		else
			I2CReadRegisterEnable <= '0';
		end if;
	end process;

	I2CReadRegister : entity work.SimpleRegister(Behavioral)
		port map(
			clock  => CLK_66MHZ,
			reset  => USER_RESET,
			set    => I2CReadRegisterEnable,
			inval  => I2CReadRegisterOut,
			outval => duty_cycle
		);

	i2c : entity work.i2c_master_byte_ctrl(structural)
		port map(
			clk      => CLK_66MHZ,
			rst      => USER_RESET,     -- synchronous active high reset (WISHBONE compatible)
			nReset   => '1',            -- asynchronous active low reset (FPGA compatible)
			ena      => '1',            -- core enable signal

			clk_cnt  => "0000000010100101",
			--clk_cnt : in unsigned(15 downto 0);	-- 4x SCL

			-- input signals
			start    => I2CWriteRegisterOut(12),
			stop     => I2CWriteRegisterOut(11),
			read     => I2CWriteRegisterOut(10),
			write    => I2CWriteRegisterOut(9),
			ack_in   => I2CWriteRegisterOut(8),
			din      => I2CWriteRegisterOut(7 downto 0),

			-- output signals
			cmd_ack  => cmd_ack,
			ack_out  => open,
			i2c_busy => open,           -- ignored
			i2c_al   => open,           -- ignored
			dout     => I2CReadRegisterOut(7 downto 0),

			-- i2c lines
			scl_i    => scl_i,          -- i2c clock line input
			scl_o    => scl_o,          -- i2c clock line output
			scl_oen  => scl_oen,        -- i2c clock line output enable, active low
			sda_i    => sda_i,          -- i2c data line input
			sda_o    => sda_o,          -- i2c data line output
			sda_oen  => sda_oen         -- i2c data line output enable, active low
		);
end Behavioral;
