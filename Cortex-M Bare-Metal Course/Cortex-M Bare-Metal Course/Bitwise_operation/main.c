//#include "tm4c123gh6pm.h"
#include <TM4C1230H6PM.h>
#define RED (1U<<1)
#define BLUE (1U<<2)
#define GREEN (1U<<3)

int main()
{  
	int volatile delay;
	//SYSCTL->RCC2|= 0x20U;
	/*/GPIO_PORTF_DIR_R  =0xEU;
	GPIO_PORTF_DEN_R = 0xEU;
	
	GPIO_PORTF_DATA_R |= GREEN;
	while(1)
	{
		delay = 0;
		while(delay <1000000){
			GPIO_PORTF_DATA_R =GPIO_PORTF_DATA_R |BLUE;
			delay++;
	}
		delay =0;
	 while(delay<1000000){
	 GPIO_PORTF_DATA_R = GPIO_PORTF_DATA_R & (~BLUE);
		delay++;
	 }
}*/

}




















