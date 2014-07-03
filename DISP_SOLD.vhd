library ieee;
use ieee.std_logic_1164.all; 
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity DISP_SOLD is
    port (EN	: in std_logic;    
			digit: in std_logic_vector (3 downto 0);
			HEX	: out std_logic_vector(6 downto 0)
	 );
   
    
end DISP_SOLD;

architecture ARH of DISP_SOLD is 
begin
	process(EN,digit)
begin
	if(EN ='1') then
		case digit is
			when "0000" => HEX <= "1000000";
         when "0001" => HEX <= "1111001";
         when "0010" => HEX <= "0100100";
         when "0011" => HEX <= "0110000";
         when "0100" => HEX <= "0011001";
         when "0101" => HEX <= "0010010";
         when "0110" => HEX <= "0000010";
         when "0111" => HEX <= "1111000";
         when "1000" => HEX <= "0000000";
         when "1001" => HEX <= "0010000";
         when others => HEX <= "1111111";
      end case;  
	else
		HEX <= "1111110";
   end if;
end process;

end ARH;