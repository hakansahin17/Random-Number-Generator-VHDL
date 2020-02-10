----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:50:46 03/14/2019 
-- Design Name: 
-- Module Name:    SevenSegmentDecoder - Behavioral 
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

entity SevenSegmentDecoder is
    Port ( BCD : unsigned (0 to 3);
           MASK : out  STD_LOGIC_VECTOR (0 to 6));
end SevenSegmentDecoder;

architecture Behavioral of SevenSegmentDecoder is	
	signal ISZERO : STD_LOGIC;
	signal ISONE : STD_LOGIC;
	signal ISTWO : STD_LOGIC;
	signal ISTHREE : STD_LOGIC;
	signal ISFOUR : STD_LOGIC;
	signal ISFIVE : STD_LOGIC;
	signal ISSIX : STD_LOGIC;
	signal ISSEVEN : STD_LOGIC;
	signal ISEIGHT : STD_LOGIC;
	signal ISNINE : STD_LOGIC;
begin
	ISZERO <= (BCD(0) xnor '0') and (BCD(1) xnor '0') and (BCD(2) xnor '0') and (BCD(3) xnor '0');
	ISONE <= (BCD(0) xnor '0') and (BCD(1) xnor '0') and (BCD(2) xnor '0') and (BCD(3) xnor '1');
	ISTWO <= (BCD(0) xnor '0') and (BCD(1) xnor '0') and (BCD(2) xnor '1') and (BCD(3) xnor '0');
	ISTHREE <= (BCD(0) xnor '0') and (BCD(1) xnor '0') and (BCD(2) xnor '1') and (BCD(3) xnor '1');
	ISFOUR <= (BCD(0) xnor '0') and (BCD(1) xnor '1') and (BCD(2) xnor '0') and (BCD(3) xnor '0');
	ISFIVE <= (BCD(0) xnor '0') and (BCD(1) xnor '1') and (BCD(2) xnor '0') and (BCD(3) xnor '1');
	ISSIX <= (BCD(0) xnor '0') and (BCD(1) xnor '1') and (BCD(2) xnor '1') and (BCD(3) xnor '0');
	ISSEVEN <= (BCD(0) xnor '0') and (BCD(1) xnor '1') and (BCD(2) xnor '1') and (BCD(3) xnor '1');
	ISEIGHT <= (BCD(0) xnor '1') and (BCD(1) xnor '0') and (BCD(2) xnor '0') and (BCD(3) xnor '0');
	ISNINE <= (BCD(0) xnor '1') and (BCD(1) xnor '0') and (BCD(2) xnor '0') and (BCD(3) xnor '1');
	MASK(0) <= ISZERO OR ISONE OR ISTWO OR ISTHREE OR ISFOUR OR ISSEVEN OR ISEIGHT OR ISNINE;
	MASK(1) <= ISZERO OR ISONE OR ISTHREE OR ISFOUR OR ISFIVE OR ISSIX OR ISSEVEN OR ISEIGHT OR ISNINE;
	MASK(2) <= ISZERO OR ISTWO OR ISTHREE OR ISFIVE OR ISSIX OR ISEIGHT OR ISNINE;
	MASK(3) <= ISZERO OR ISTWO OR ISSIX OR ISEIGHT;
	MASK(4) <= ISZERO OR ISFOUR OR ISFIVE OR ISSIX OR ISEIGHT OR ISNINE;
	MASK(5) <= ISZERO OR ISTWO OR ISTHREE OR ISFIVE OR ISSIX OR ISSEVEN OR ISEIGHT OR ISNINE;
	MASK(6) <= ISTWO OR ISTHREE OR ISFOUR OR ISFIVE OR ISSIX OR ISEIGHT OR ISNINE;
end Behavioral;

