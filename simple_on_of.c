#include<reg51.h>

void delay(unsigned int x){
unsigned int i=0;
	for(i;i<=x;i++){
	}
	

}

void main(){
	while(1){
	P3=0x00;
	delay(50000);
	P3=0xFF;
			delay(50000);

	}
}
