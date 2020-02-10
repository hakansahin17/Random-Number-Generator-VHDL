--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:34:45 05/16/2019
-- Design Name:   
-- Module Name:   C:/Users/Utkan/LabProject/FourDigitsTest.vhd
-- Project Name:  LabProject
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: FourDigits
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
USE ieee.numeric_std.ALL;
 
ENTITY FourDigitsTest IS
END FourDigitsTest;
 
ARCHITECTURE behavior OF FourDigitsTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FourDigits
    PORT(
         BIN : IN  unsigned(0 to 12);
         RUN : IN  std_logic;
         CLK : IN  std_logic;
         D1 : OUT  unsigned(0 to 3);
         D2 : OUT  unsigned(0 to 3);
         D3 : OUT  unsigned(0 to 3);
         D4 : OUT  unsigned(0 to 3);
         DONE : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal BIN : unsigned(0 to 12) := (others => '0');
   signal RUN : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal D1 : unsigned(0 to 3);
   signal D2 : unsigned(0 to 3);
   signal D3 : unsigned(0 to 3);
   signal D4 : unsigned(0 to 3);
   signal DONE : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FourDigits PORT MAP (
          BIN => BIN,
          RUN => RUN,
          CLK => CLK,
          D1 => D1,
          D2 => D2,
          D3 => D3,
          D4 => D4,
          DONE => DONE
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		BIN <= to_unsigned(1863, 13); RUN <= '1';
		wait for CLK_PERIOD;
		RUN <= '0';
      wait for CLK_period*30;
		BIN <= to_unsigned(3230, 13); RUN <= '1';
		wait for CLK_PERIOD;
		RUN <= '0';
      wait for CLK_period*30;
      wait;
   end process;

END;
