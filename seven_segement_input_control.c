//This is written for a Common Anode 7 segment Display only.//

#include <avr/io.h>
#include <util/delay.h>

int main(){

  unsigned char arr[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};

  DDRD = 0xFF; 

  DDRB = 0x00; 

  int i = 0;
  
  while(1){
  
  
	if((PINB & 0b00000001) == 0) {
		
		if(i%2==1) {
			i--;
		}
	}
	
	else {
		if(i%2==0) {
			i--;
		}
	}
	
	if(i<0) {
		i *= -1;
	}
	
	i = i % 10;
	
	PORTD = arr[i];
	_delay_ms(100);
	
	i = (i+2);
	
  }

  return 0;
}