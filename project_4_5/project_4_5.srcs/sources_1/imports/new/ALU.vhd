library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity ALU is
	generic(
		WIDTH : integer := 16
	);
	Port(
		register_D : in  std_logic_vector(WIDTH - 1 downto 0);
		A_or_M     : in  std_logic_vector(WIDTH - 1 downto 0);
		c          : in  std_logic_vector(WIDTH - 1 downto 0);

		comp       : out std_logic_vector(WIDTH - 1 downto 0)
	);
end ALU;

architecture Behavioral of ALU is
	signal c1_6   : std_logic_vector(5 downto 0);
	signal g_comp : std_logic_vector(WIDTH - 1 downto 0);
begin
	c1_6 <= c(11 downto 6);
	ALU_operation : process(register_D, A_or_M, c, c1_6)
	begin
		case c1_6 is
			when "111111" => g_comp <= std_logic_vector(to_unsigned(1, WIDTH));
			when "111010" => g_comp <= (others => '1');
			when "001100" => g_comp <= register_D;
			when "110000" => g_comp <= A_or_M;
			when "001101" => g_comp <= not register_D;
			when "110001" => g_comp <= not A_or_M;
			when "001111" => g_comp <= std_logic_vector(-signed(register_D));
			when "110011" => g_comp <= std_logic_vector(-signed(A_or_M));
			when "011111" => g_comp <= std_logic_vector(signed(register_D) + 1);
			when "110111" => g_comp <= std_logic_vector(signed(A_or_M) + 1);
			when "001110" => g_comp <= std_logic_vector(signed(register_D) - 1);
			when "110010" => g_comp <= std_logic_vector(signed(A_or_M) - 1);
			when "000010" => g_comp <= std_logic_vector(signed(register_D) + signed(A_or_M));
			when "010011" => g_comp <= std_logic_vector(signed(register_D) - signed(A_or_M));
			when "000111" => g_comp <= std_logic_vector(signed(A_or_M) - signed(register_D));
			when "000000" => g_comp <= register_D and A_or_M;
			when "010101" => g_comp <= register_D or A_or_M;
			when others   => g_comp <= (others => '0');
		end case;
	end process;
	comp <= g_comp;
end Behavioral;
