#include<avr/io.h>
#include<util/delay.h>

int main(){
	char A[] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};
	DDRB = 0xFF;
	DDRC = 0x00;
	PORTC = 0x00;
	
	
	while(1){
		for(int i=0; i<8; i++){
			PORTB = A[i];
			_delay_ms(100);
		}	
		
		
		for(int i=6; i>=0; i--){
			PORTB = A[i];
			_delay_ms(100);
		}
	}
	
}