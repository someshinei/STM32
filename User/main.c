#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"

uint8_t KeyNum;

int main(void){
	

/*----------------------------------------------------------------*/
	OLED_Init();
	//OLED_ShowChar(1,1,'A');
	OLED_ShowString(1,3,"HelloWorld!");
	//OLED_ShowNum(2,1,12345,5);
/*----------------------------------------------------------------*/
	while(1){
		
	}
}
