#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 12000000UL

#define zero 0b11000000
#define one 0b11111001
#define two 0b10100100
#define three 0b10110000
#define four 0b10011001
#define five 0b10010010
#define six 0b10000010
#define seven 0b11111000
#define eight 0b10000000
#define nine 0b10010000  

int main(void)
{ 
	DDRD=0XFF;
	
	while(1){
		PORTD=nine;
		_delay_ms(100);
		
		PORTD=seven;
		_delay_ms(100);
		
		PORTD=five;
		_delay_ms(100);
		
		PORTD=three;
		_delay_ms(100);
		
		PORTD=one;
		_delay_ms(100);
		
		PORTD=eight;
		_delay_ms(100);
		
		PORTD=six;
		_delay_ms(100);
		
		PORTD=four;
		_delay_ms(100);
		
		PORTD=two;
		_delay_ms(100);
		
		PORTD=zero;
		_delay_ms(100);	
	}
}