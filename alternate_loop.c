#include<reg51.h>

void delay(unsigned int x){
unsigned int i=0;
	for(i;i<=x;i++){
	}
	

}

void main(){
	while(1){
	P3=0xAA;
	delay(50000);
	P3=0x55;
			delay(50000);

	}
}
