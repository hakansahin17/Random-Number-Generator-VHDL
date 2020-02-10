
-- VHDL Instantiation Created from source file FourDigits.vhd -- 21:35:23 05/16/2019
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT FourDigits
	PORT(
		BIN : IN std_logic_vector(0 to 12);
		RUN : IN std_logic;
		CLK : IN std_logic;          
		D1 : OUT std_logic_vector(0 to 3);
		D2 : OUT std_logic_vector(0 to 3);
		D3 : OUT std_logic_vector(0 to 3);
		D4 : OUT std_logic_vector(0 to 3);
		DONE : OUT std_logic
		);
	END COMPONENT;

	Inst_FourDigits: FourDigits PORT MAP(
		BIN => ,
		RUN => ,
		CLK => ,
		D1 => ,
		D2 => ,
		D3 => ,
		D4 => ,
		DONE => 
	);


