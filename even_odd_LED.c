#include<avr/io.h>
#include<util/delay.h>

int main(){
	DDRB = 0xFF;
	DDRC = 0x00;
	PORTC = 0x00; 
	
	
	while(1){
	
		PORTB = 0xAA;
		_delay_ms(100);
		PORTB = 0x55;
		_delay_ms(100);
	}
	
}