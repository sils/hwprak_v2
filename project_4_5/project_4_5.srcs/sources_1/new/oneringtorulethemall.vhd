library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;

entity unite is
	Port(
		LED        : out   std_ulogic_vector(3 downto 0);
		CLK_66MHZ  : in    std_ulogic;
		SDA, SCL   : inout std_logic;
		USER_RESET : in    std_logic
	);
end unite;

architecture Behavioral of unite is
	signal duty_cycle : unsigned(7 downto 0);

	signal scl_i   : std_logic;         -- i2c clock line input
	signal scl_o   : std_logic;         -- i2c clock line output
	signal scl_oen : std_logic;         -- i2c clock line output enable, active low
	signal sda_i   : std_logic;         -- i2c data line input
	signal sda_o   : std_logic;         -- i2c data line output
	signal sda_oen : std_logic;

	signal start, stop, read, write, ack_in : std_logic;
	signal din                              : std_logic_vector(7 downto 0);
	signal dout                             : std_logic_vector(7 downto 0);
	signal cmd_ack                          : std_logic; -- command done
	signal ack_out                          : std_logic;

	-- we ignore those values:
	signal i2c_busy, i2c_al : std_logic;

	-- new cpu signals
	signal instruction : std_ulogic_vector(15 downto 0);
	signal inM         : std_ulogic_vector(15 downto 0);
	signal writeM      : std_ulogic;
	signal outM        : std_ulogic_vector(15 downto 0);
	signal adressM     : std_ulogic_vector(14 downto 0);
	signal pc          : std_ulogic_vector(14 downto 0);
begin
	pwm : entity work.LEDPWM(Behavioral)
		generic map(WIDTH => 25)
		port map(
			CLK_66MHZ  => CLK_66MHZ,
			LED        => LED,
			duty_cycle => duty_cycle
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

	i2c : entity work.i2c_master_byte_ctrl(structural)
		port map(
			clk      => CLK_66MHZ,
			rst      => USER_RESET,     -- synchronous active high reset (WISHBONE compatible)
			nReset   => '1',            -- asynchronous active low reset (FPGA compatible)
			ena      => '1',            -- core enable signal

			clk_cnt  => "0000000010100101",
			--clk_cnt : in unsigned(15 downto 0);	-- 4x SCL

			-- input signals
			start    => start,
			stop     => stop,
			read     => read,
			write    => write,
			ack_in   => ack_in,
			din      => din,

			-- output signals
			cmd_ack  => cmd_ack,
			ack_out  => open,
			i2c_busy => open,           -- ignored
			i2c_al   => open,           -- ignored
			dout     => dout,

			-- i2c lines
			scl_i    => scl_i,          -- i2c clock line input
			scl_o    => scl_o,          -- i2c clock line output
			scl_oen  => scl_oen,        -- i2c clock line output enable, active low
			sda_i    => sda_i,          -- i2c data line input
			sda_o    => sda_o,          -- i2c data line output
			sda_oen  => sda_oen         -- i2c data line output enable, active low
		);
end Behavioral;
