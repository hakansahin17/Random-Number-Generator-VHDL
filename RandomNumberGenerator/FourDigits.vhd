----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:15:44 05/16/2019 
-- Design Name: 
-- Module Name:    FourDigits - Behavioral 
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
--library UNISIM;
--use UNISIM.VComponents.all;

entity FourDigits is
    Port ( BIN : in  unsigned (0 to 12);
			  RUN : in  STD_LOGIC;
			  CLK : in STD_LOGIC;
           D1 : out  unsigned (0 to 3);
           D2 : out  unsigned (0 to 3);
           D3 : out  unsigned (0 to 3);
           D4 : out  unsigned (0 to 3);
           DONE : out  STD_LOGIC
           );
end FourDigits;

architecture Behavioral of FourDigits is
	signal current : unsigned(0 to 12) := to_unsigned(0, 13);
	signal digit1 : integer range 0 to 9 := 0;
	signal digit2 : integer range 0 to 9 := 0;
	signal digit3 : integer range 0 to 9 := 0;
	signal digit4 : integer range 0 to 9 := 0;
	
	-- fsm begin
	constant s_init : STD_LOGIC_VECTOR(0 to 2) := "000";
	constant s_dig1 : STD_LOGIC_VECTOR(0 to 2) := "001";
	constant s_dig2 : STD_LOGIC_VECTOR(0 to 2) := "010";
	constant s_dig3 : STD_LOGIC_VECTOR(0 to 2) := "100";
	constant s_dig4 : STD_LOGIC_VECTOR(0 to 2) := "101";
	constant s_done : STD_LOGIC_VECTOR(0 to 2) := "110";
	signal State : STD_LOGIC_VECTOR(0 to 2) := s_init;
	-- fsm end
begin
	process(CLK)
	begin
	if(rising_edge(CLK)) then
		case State is
			when s_init =>
				DONE <= '0';
				current <= unsigned(BIN);
				digit1 <= 0;
				digit2 <= 0;
				digit3 <= 0;
				digit4 <= 0;
				State <= s_dig1;
			when s_dig1 =>
				if(current > 999) then
					digit1 <= digit1 + 1;
					current <= current - 1000;
				end if;
				if(current < 1000) then
					State <= s_dig2;
				else
					State <= s_dig1;
				end if;
			when s_dig2 =>
				if(current > 99) then
					digit2 <= digit2 + 1;
					current <= current - 100;
				end if;
				if(current < 100) then
					State <= s_dig3;
				else
					State <= s_dig2;
				end if;
			when s_dig3 =>
				if(current > 9) then
					digit3 <= digit3 + 1;
					current <= current - 10;
				end if;
				if(current < 10) then
					State <= s_dig4;
				else
					State <= s_dig3;
				end if;
			when s_dig4 =>
				if(current > 0) then
					digit4 <= digit4 + 1;
					current <= current - 1;
				end if;
				if(current = 0) then
					State <= s_done;
				else
					State <= s_dig4;
				end if;
			when s_done =>
				DONE <= '1';
				-- report the digits
				D1 <= to_unsigned(digit1, 4);
				D2 <= to_unsigned(digit2, 4);
				D3 <= to_unsigned(digit3, 4);
				D4 <= to_unsigned(digit4, 4);
				if(RUN = '1') then
					State <= s_init;
				else
					State <= s_done;
				end if;
			when others =>
				State <= s_init;
			end case;
		end if;
	end process;

end Behavioral;

