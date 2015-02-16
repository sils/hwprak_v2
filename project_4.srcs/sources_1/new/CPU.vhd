library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity CPU is
	generic(
		WIDTH         : integer := 16;
		ADDRESS_WIDTH : integer := 10
	);
	Port(
		inM          : in  std_ulogic_vector(WIDTH - 1 downto 0);
		instruction  : in  std_ulogic_vector(WIDTH - 1 downto 0);
		reset        : in  std_ulogic;
		outM         : out std_ulogic_vector(WIDTH - 1 downto 0);
		writeM       : out std_ulogic;
		addressM_out : out std_ulogic_vector(ADDRESS_WIDTH - 1 downto 0);
		pc           : out std_ulogic_vector(ADDRESS_WIDTH - 1 downto 0);
		clock        : in  std_ulogic
	);
end CPU;

architecture Behavioral of CPU is
	signal comp, ins_val_mux_out, pc_s, addressM : std_ulogic_vector(WIDTH - 1 downto 0);
	signal D                                     : std_ulogic_vector(WIDTH - 1 downto 0) := (others => '0');
	signal A_or_M                                : std_ulogic_vector(WIDTH - 1 downto 0) := (others => '0');
	signal A_set, write_D                        : std_ulogic;
begin
	our_beloved_ALU : entity work.ALU(Behavioral)
		generic map(
			WIDTH => WIDTH
		)
		port map(
			clock      => clock,
			register_D => D,
			A_or_M     => A_or_M,
			c          => instruction,
			comp       => comp
		);

	A_set <= '1' when instruction(5) = '1' or instruction(WIDTH - 1) = '0' else '0';
	register_A : entity work.SimpleRegister(Behavioral)
		generic map(
			WIDTH => WIDTH
		)
		port map(
			inval  => ins_val_mux_out,
			outval => addressM,
			set    => A_set,
			clock  => clock,
			reset  => reset
		);

	write_D <= instruction(4) when instruction(WIDTH-1) = '1' else '0';
	register_D : entity work.SimpleRegister(Behavioral)
		generic map(
			WIDTH => WIDTH
		)
		port map(
			inval  => comp,
			outval => D,
			set    => write_D,
			clock  => clock,
			reset  => reset
		);

	instruction_value_MUX : entity work.Mux(Behavioral)
		generic map(
			WIDTH => WIDTH
		)
		port map(
			val1   => instruction,
			val2   => comp,
			switch => instruction(WIDTH - 1),
			outval => ins_val_mux_out
		);

	ALU_instruction_MUX : entity work.Mux(Behavioral)
		generic map(
			WIDTH => WIDTH
		)
		port map(
			val1   => addressM,
			val2   => inM,
			switch => instruction(WIDTH - 4),
			outval => A_or_M
		);

	register_PC : entity work.ProgramCounter
		generic map(
			WIDTH => WIDTH
		)
		port map(
			inval       => addressM,
			comp        => comp,
			instruction => instruction,
			reset       => reset,
			clock       => clock,
			outval      => pc_s
		);

	pc           <= pc_s(ADDRESS_WIDTH - 1 downto 0);
	addressM_out <= addressM(ADDRESS_WIDTH - 1 downto 0);
	outM         <= comp;
	writeM       <= instruction(3);
end Behavioral;
