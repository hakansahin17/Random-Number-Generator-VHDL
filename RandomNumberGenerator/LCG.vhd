----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:07:41 05/16/2019 
-- Design Name: 
-- Module Name:    LCG - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity LCG is
	 Generic ( a : integer := 29;
				  b : integer := 7;
				  m : integer := 65535 -- 2^16-1
				);
    Port ( CLK : in  STD_LOGIC;
           RUN : in  STD_LOGIC;
			  RUNNING : out STD_LOGIC;
			  DONE : out STD_LOGIC;
           CURR : inout  unsigned (0 to 15));
end LCG;

architecture Behavioral of LCG is
	-- fsm begin
	constant s_init : STD_LOGIC_VECTOR(0 to 1) := "00";
	constant s_calculate : STD_LOGIC_VECTOR(0 to 1) := "01";
	constant s_done : STD_LOGIC_VECTOR(0 to 1) := "11";
	signal State : STD_LOGIC_VECTOR(0 to 1) := s_init;
	-- fsm end
	
begin
	process(CLK)
		variable curr_int : integer range 0 to m := 30;
	begin
		if(rising_edge(CLK)) then
			case State is
				when s_init =>
					DONE <= '0';
					RUNNING <= '0';
					curr_int := curr_int + 1;
					CURR <= to_unsigned(0, 16);
					if(RUN = '1') then
						State <= s_calculate;
					else
						State <= s_init;
					end if;
				when s_calculate =>
					DONE <= '0';
					RUNNING <= '1';
					curr_int := (curr_int * a + b);
					State <= s_done;
				when s_done =>
					DONE <= '1';
					CURR <= to_unsigned(curr_int, 16);
					if(RUN = '1') then
						State <= s_calculate;
					else
						State <= s_init;
					end if;
				when others => 
					State <= s_init;
			end case;
		end if;
	end process;

end Behavioral;

