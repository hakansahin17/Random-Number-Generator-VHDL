----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:35:36 05/16/2019 
-- Design Name: 
-- Module Name:    Main - Behavioral 
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

entity Main is
	 Generic( MAX : INTEGER := 2**16);
    Port ( CLK : in  STD_LOGIC;
           GET : in  STD_LOGIC;
     --      INC_RANGE : in  STD_LOGIC;
     --      DEC_RANGE : in  STD_LOGIC;
			  ANODES : out STD_LOGIC_VECTOR(0 to 7);
			  SEVENSEGMENT : out STD_LOGIC_VECTOR(0 to 6)
     --      CURR_RANGE : out  unsigned (0 to 7)
			  );
end Main;

architecture Behavioral of Main is
	-- fsm begin
	constant s_init : STD_LOGIC_VECTOR(0 to 2) := "000";
	constant s_start : STD_LOGIC_VECTOR(0 to 2) := "001";
	constant s_acquire : STD_LOGIC_VECTOR(0 to 2) := "010";
	constant s_done : STD_LOGIC_VECTOR(0 to 2) := "100";
	constant s_wait : STD_LOGIC_VECTOR(0 to 2) := "101";
	signal State : STD_LOGIC_VECTOR(0 to 2) := s_init;
	-- fsm end
	
	signal lfg_run : STD_LOGIC := '0';
	signal lfg_done : STD_LOGIC;
	signal lfg_curr : unsigned(0 to 15);
	
	-- RANDOM output begin
	signal curr_rand_int : unsigned(0 to 12);
	-- bcd decoded version
	signal curr_rand_d1 : unsigned(0 to 3);
	signal curr_rand_d2 : unsigned(0 to 3);
	signal curr_rand_d3 : unsigned(0 to 3);
	signal curr_rand_d4 : unsigned(0 to 3);
	-- 7-segment masks
	signal curr_rand_d1_mask : std_logic_vector(0 to 6);
	signal curr_rand_d2_mask : std_logic_vector(0 to 6);
	signal curr_rand_d3_mask : std_logic_vector(0 to 6);
	signal curr_rand_d4_mask : std_logic_vector(0 to 6);
	-- RANDOM output end
	
	signal bcd_decoder_run : STD_LOGIC := '0';
	signal bcd_decoder_done : STD_LOGIC;
	
begin

	FDG : entity work.FourDigits(Behavioral)
		PORT MAP(
			CLK => CLK,
			BIN => curr_rand_int,
			RUN => bcd_decoder_run,
			DONE => bcd_decoder_done,
			D1 => curr_rand_d1,
			D2 => curr_rand_d2,
			D3 => curr_rand_d3,
			D4 => curr_rand_d4
		);
	
	SSD1 : entity work.SevenSegmentDecoder(Behavioral)
		PORT MAP(
			BCD => curr_rand_d1,
			MASK => curr_rand_d1_mask
		);
	
	SSD2 : entity work.SevenSegmentDecoder(Behavioral)
		PORT MAP(
			BCD => curr_rand_d2,
			MASK => curr_rand_d2_mask
		);
	
	SSD3 : entity work.SevenSegmentDecoder(Behavioral)
		PORT MAP(
			BCD => curr_rand_d3,
			MASK => curr_rand_d3_mask
		);
	
	SSD4 : entity work.SevenSegmentDecoder(Behavioral)
		PORT MAP(
			BCD => curr_rand_d4,
			MASK => curr_rand_d4_mask
		);

	LFG : entity work.LFG(Behavioral)
		PORT MAP(
			CLK => CLK,
			RUN => lfg_run,
			DONE => lfg_done,
			CURR => lfg_curr
		);
		
	process(CLK)
		variable curr_int : integer range 0 to 2**13;
	begin
		if(rising_edge(CLK)) then
			case State is
				when s_init =>
					curr_rand_int <= to_unsigned(0, 13);
					lfg_run <= '0';
					if(GET = '0') then
						State <= s_init;
					else
						State <= s_start;
					end if;
				when s_start =>
					lfg_run <= '1';
					State <= s_acquire;
				when s_acquire =>
					lfg_run <= '0';
					if(lfg_done = '1') then
						State <= s_done;
					else
						State <= s_acquire;
					end if;
				when s_done =>
					curr_int := to_integer(lfg_curr) mod 2**13;
					curr_rand_int <= to_unsigned(curr_int, 13);
					if(GET = '1') then
						State <= s_done;
					else
						bcd_decoder_run <= '1';
						State <= s_wait;
					end if;
				when s_wait =>
					bcd_decoder_run <= '0';
					if(GET = '0') then
						State <= s_wait;
					else
						State <= s_start;
					end if;
				when others =>
					State <= s_init;
			end case;
		end if;
	end process;

	process(CLK)
			variable counter : integer range 0 to max := 0;
		begin
			if(rising_edge(CLK)) then
				counter := counter + 1;
				if(counter mod max = 0) then
					anodes <= "11111110";
					sevensegment <= not curr_rand_d4_mask;
				elsif(counter mod max = max/4) then
					anodes <= "11111101";
					sevensegment <= not curr_rand_d3_mask;
				elsif(counter mod max = 2*max/4) then
					anodes <= "11111011";
					sevensegment <= not curr_rand_d2_mask;
				elsif(counter mod max = 3*max/4) then
					anodes <= "11110111";
					sevensegment <= not curr_rand_d1_mask;
				end if;
			end if;
		end process;
end Behavioral;

