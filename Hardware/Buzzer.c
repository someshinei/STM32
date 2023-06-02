#include "stm32f10x.h"                  // Device header


void Buzzer_Init(void){
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStrcture;
	
	GPIO_InitStrcture.GPIO_Mode = GPIO_Mode_IPD;
	GPIO_InitStrcture.GPIO_Pin = GPIO_Pin_12;
	GPIO_InitStrcture.GPIO_Speed = GPIO_Speed_50MHz;
	
	GPIO_Init(GPIOB, &GPIO_InitStrcture);
	

}

void Buzzer_ON(void){	
	GPIO_ResetBits(GPIOB, GPIO_Pin_12);	
}

void Buzzer_OFF(void){	
	GPIO_SetBits(GPIOB, GPIO_Pin_12);	
}


