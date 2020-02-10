--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:18:46 05/16/2019
-- Design Name:   
-- Module Name:   C:/Users/Utkan/LabProject/SeedGenTest.vhd
-- Project Name:  LabProject
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: SeedGen
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
 
ENTITY SeedGenTest IS
END SeedGenTest;
 
ARCHITECTURE behavior OF SeedGenTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT SeedGen
    PORT(
         CLK : IN  std_logic;
         RUN : IN  std_logic;
         S0 : OUT  unsigned(0 to 15);
         S1 : OUT  unsigned(0 to 15);
         S2 : OUT  unsigned(0 to 15);
         S3 : OUT  unsigned(0 to 15);
         S4 : OUT  unsigned(0 to 15);
         S5 : OUT  unsigned(0 to 15);
         S6 : OUT  unsigned(0 to 15);
         DONE : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal RUN : std_logic := '0';

 	--Outputs
   signal S0 : unsigned(0 to 15);
   signal S1 : unsigned(0 to 15);
   signal S2 : unsigned(0 to 15);
   signal S3 : unsigned(0 to 15);
   signal S4 : unsigned(0 to 15);
   signal S5 : unsigned(0 to 15);
   signal S6 : unsigned(0 to 15);
   signal DONE : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: SeedGen PORT MAP (
          CLK => CLK,
          RUN => RUN,
          S0 => S0,
          S1 => S1,
          S2 => S2,
          S3 => S3,
          S4 => S4,
          S5 => S5,
          S6 => S6,
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
		RUN <= '0';
      wait for CLK_period;
		RUN <= '1';
      wait for CLK_period*30;
		RUN <= '0';
      wait for CLK_period*2;
		RUN <= '1';
      wait for CLK_period*30;
      -- insert stimulus here 

      wait;
   end process;

END;
