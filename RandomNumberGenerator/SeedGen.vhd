----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:46:50 05/16/2019 
-- Design Name: 
-- Module Name:    SeedGen - Behavioral 
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

entity SeedGen is
    Port ( CLK : in  STD_LOGIC;
			  RUN : in  STD_LOGIC;
           S0 : out  unsigned (0 to 15);
           S1 : out  unsigned (0 to 15);
           S2 : out  unsigned (0 to 15);
           S3 : out  unsigned (0 to 15);
           S4 : out  unsigned (0 to 15);
           S5 : out  unsigned (0 to 15);
           S6 : out  unsigned (0 to 15);
           DONE : out  STD_LOGIC
          );
end SeedGen;

architecture Behavioral of SeedGen is
	-- fsm begin
	constant s_init : STD_LOGIC_VECTOR(0 to 3) := "0000";
	constant s_start : STD_LOGIC_VECTOR(0 to 3) := "1011";
	constant s_0 : STD_LOGIC_VECTOR(0 to 3) := "0001";
	constant s_1 : STD_LOGIC_VECTOR(0 to 3) := "0010";
	constant s_2 : STD_LOGIC_VECTOR(0 to 3) := "0011";
	constant s_3 : STD_LOGIC_VECTOR(0 to 3) := "0100";
	constant s_4 : STD_LOGIC_VECTOR(0 to 3) := "0101";
	constant s_5 : STD_LOGIC_VECTOR(0 to 3) := "0110";
	constant s_6 : STD_LOGIC_VECTOR(0 to 3) := "0111";
	constant s_done : STD_LOGIC_VECTOR(0 to 3) := "1001";
	signal State : STD_LOGIC_VECTOR(0 to 3) := s_init;
	-- fsm end
	
	signal lcg_curr : unsigned(0 to 15);
	signal lcg_run : STD_LOGIC := '0';
	signal lcg_running : STD_LOGIC;
	signal lcg_done : STD_LOGIC;
	
begin
	
	LCG : entity work.LCG(Behavioral)
		PORT MAP(
			CLK => CLK,
			RUN => lcg_run,
			CURR => lcg_curr,
			RUNNING => lcg_running,
			DONE => lcg_done
		);
	
	process(CLK)
	begin
		if(rising_edge(CLK)) then
			case State is
				when s_init =>
					DONE <= '0';
					lcg_run <= '0';
					S0 <= to_unsigned(0, 16);
					S1 <= to_unsigned(0, 16);
					S2 <= to_unsigned(0, 16);
					S3 <= to_unsigned(0, 16);
					S4 <= to_unsigned(0, 16);
					S5 <= to_unsigned(0, 16);
					S6 <= to_unsigned(0, 16);
					if(RUN = '1') then
						State <= s_start;
					else
						State <= s_init;
					end if;
				when s_start =>
					DONE <= '0';
					lcg_run <= '1';
					if(lcg_done = '1') then
						State <= s_0;
					else
						State <= s_start;
					end if;
				when s_0 =>
					S0 <= lcg_curr;
					if(lcg_done = '1') then
						State <= s_1;
					else
						State <= s_0;
					end if;
				when s_1 =>
					S1 <= lcg_curr;
					if(lcg_done = '1') then
						State <= s_2;
					else
						State <= s_1;
					end if;
				when s_2 =>
					S2 <= lcg_curr;
					if(lcg_done = '1') then
						State <= s_3;
					else
						State <= s_2;
					end if;
				when s_3 =>
					S3 <= lcg_curr;
					if(lcg_done = '1') then
						State <= s_4;
					else
						State <= s_3;
					end if;
				when s_4 =>
					S4 <= lcg_curr;
					if(lcg_done = '1') then
						State <= s_5;
					else
						State <= s_4;
					end if;
				when s_5 =>
					S5 <= lcg_curr;
					if(lcg_done = '1') then
						State <= s_6;
					else
						State <= s_5;
					end if;
				when s_6 =>
					S6 <= lcg_curr;
					if(lcg_done = '1') then
						State <= s_done;
					else
						State <= s_6;
					end if;
				when s_done =>
					DONE <= '1';
					lcg_run <= '0';
					if(RUN = '1') then
						State <= s_done;
					else
						State <= s_init;
					end if;
				when others =>
					State <= s_init;
			end case;
		end if;
	end process;

end Behavioral;

