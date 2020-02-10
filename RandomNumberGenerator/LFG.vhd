----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:45:07 05/16/2019 
-- Design Name: 
-- Module Name:    LFG - Behavioral 
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

entity LFG is
    Port ( CLK : in  STD_LOGIC;
           RUN : in  STD_LOGIC;
           DONE : out  STD_LOGIC;
           CURR : out  unsigned (0 to 15));
end LFG;

architecture Behavioral of LFG is
	-- fsm begin
	constant s_init : STD_LOGIC_VECTOR(0 to 1) := "00";
	constant s_acquire : STD_LOGIC_VECTOR(0 to 1) := "01";
	constant s_calculate : STD_LOGIC_VECTOR(0 to 1) := "10";
	constant s_done : STD_LOGIC_VECTOR(0 to 1) := "11";
	signal State : STD_LOGIC_VECTOR(0 to 1) := s_init;
	-- fsm end
	
	signal seedgen_r0 : unsigned(0 to 15);
	signal seedgen_r1 : unsigned(0 to 15);
	signal seedgen_r2 : unsigned(0 to 15);
	signal seedgen_r3 : unsigned(0 to 15);
	signal seedgen_r4 : unsigned(0 to 15);
	signal seedgen_r5 : unsigned(0 to 15);
	signal seedgen_r6 : unsigned(0 to 15);
	signal seedgen_run : STD_LOGIC;
	signal seedgen_done : STD_LOGIC;
	
begin
	SDGN : entity work.SeedGen(Behavioral)
		PORT MAP(
			CLK => CLK,
			DONE => seedgen_done,
			RUN => seedgen_run,
			S0 => seedgen_r0,
			S1 => seedgen_r1,
			S2 =>	seedgen_r2,
			S3 => seedgen_r3,
			S4 => seedgen_r4,
			S5 =>	seedgen_r5,
			S6 =>	seedgen_r6
		);
	
	process(CLK)
		variable r0 : integer range 0 to 2**16 := 0;
		variable r1 : integer range 0 to 2**16 := 0;
		variable r2 : integer range 0 to 2**16 := 0;
		variable r3 : integer range 0 to 2**16 := 0;
		variable r4 : integer range 0 to 2**16 := 0;
		variable r5 : integer range 0 to 2**16 := 0;
		variable r6 : integer range 0 to 2**16 := 0;
		variable r7 : integer range 0 to 2**16 := 0;
	begin
		if(rising_edge(CLK)) then
			case State is
				when s_init =>
					r0 := 0;
					r1 := 0;
					r2 := 0;
					r3 := 0;
					r4 := 0;
					r5 := 0;
					r6 := 0;
					r7 := 0;
					DONE <= '0';
					seedgen_run <= '0';
					if(RUN = '1') then
						State <= s_acquire;
					else
						State <= s_init;
					end if;
				when s_acquire =>
					seedgen_run <= '1';
					if(seedgen_done = '1') then
						r0 := to_integer(seedgen_r0);
						r1 := to_integer(seedgen_r1);
						r2 := to_integer(seedgen_r2);
						r3 := to_integer(seedgen_r3);
						r4 := to_integer(seedgen_r4);
						r5 := to_integer(seedgen_r5);
						r6 := to_integer(seedgen_r6);
						seedgen_run <= '0';
						State <= s_calculate;
					else
						State <= s_acquire;
					end if;
				when s_calculate =>
					DONE <= '0';
					r7 := r0 + r4; -- calculate
					r0 := r1; -- and shift
					r1 := r2;
					r2 := r3;
					r3 := r4;
					r4 := r5;
					r5 := r6;
					r6 := r7;
					CURR <= to_unsigned(r7, 16);
					State <= s_done;
				when s_done =>
					DONE <= '1';
					if(RUN = '1') then
						State <= s_calculate;
					else
						State <= s_done;
					end if;
				when others =>
					State <= s_init;
			end case;
		end if;
	end process;

end Behavioral;

