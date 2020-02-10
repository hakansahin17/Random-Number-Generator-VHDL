--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:40:34 05/16/2019
-- Design Name:   
-- Module Name:   C:/Users/Utkan/LabProject/LCGTest.vhd
-- Project Name:  LabProject
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: LCG
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
 
ENTITY LCGTest IS
END LCGTest;
 
ARCHITECTURE behavior OF LCGTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT LCG
    PORT(
         CLK : IN  std_logic;
         RUN : IN  std_logic;
         RUNNING : OUT  std_logic;
         CURR : INOUT  unsigned(0 to 15)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal RUN : std_logic := '0';

	--BiDirs
   signal CURR : unsigned(0 to 15);

 	--Outputs
   signal RUNNING : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: LCG PORT MAP (
          CLK => CLK,
          RUN => RUN,
          RUNNING => RUNNING,
          CURR => CURR
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
		-- insert stimulus here 
		RUN <= '0';
      wait for CLK_period;
		RUN <= '1';
      wait for CLK_period * 50;
		RUN <= '0';
      wait;
   end process;

END;
