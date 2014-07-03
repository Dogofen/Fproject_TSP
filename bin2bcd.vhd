library ieee;
use ieee.std_logic_1164.all; 
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity bin2bcd is
    port (EN: in std_logic;  
    SUMA: in integer range 0 to 9999;
    to_sevenseg0: out std_logic_vector(3 downto 0);
    to_sevenseg1: out std_logic_vector(3 downto 0);
    to_sevenseg2: out std_logic_vector(3 downto 0);
    to_sevenseg3: out std_logic_vector(3 downto 0));
end bin2bcd;

architecture ARH of bin2bcd is 
begin
    process(EN, SUMA)
    variable BIN: std_logic_vector(13 downto 0);
    variable BCD: std_logic_vector(15 downto 0):=(others => '0');
    variable i: integer:=0;
    begin
        if EN='1' then
            BIN := conv_std_logic_vector(SUMA, 14);
				BCD :=(others=>'0');
            -- Convert Binary to BCD (Double Dabble algorithm)
            for i in 0 to 13 loop
                bcd(15 downto 1) := bcd(14 downto 0); --shifting the bits.
                bcd(0) := bin(13);
                bin(13 downto 1) := bin(12 downto 0);
                bin(0) :='0';

                if(i < 13 and bcd(3 downto 0) > "0100") then --add 3 if BCD digit is greater than 4.
                bcd(3 downto 0) := bcd(3 downto 0) + "0011";
                end if;
                if(i < 13 and bcd(7 downto 4) > "0100") then --add 3 if BCD digit is greater than 4.
                bcd(7 downto 4) := bcd(7 downto 4) + "0011";
                end if;
                if(i < 13 and bcd(11 downto 8) > "0100") then  --add 3 if BCD digit is greater than 4.
                bcd(11 downto 8) := bcd(11 downto 8) + "0011";
                end if; 
                if(i < 13 and bcd(15 downto 12) > "0100") then  --add 3 if BCD digit is greater than 4.
                bcd(15 downto 12) := bcd(15 downto 12) + "0011";
                end if;
            end loop; 
				else
				bcd:=(others=>'0');
        end if;
	to_sevenseg0 <= bcd(15 downto 12);
   to_sevenseg1 <= bcd(11 downto 8);
   to_sevenseg2 <= bcd(7 downto 4);
   to_sevenseg3 <= bcd(3 downto 0);
   end process;

 


end ARH;