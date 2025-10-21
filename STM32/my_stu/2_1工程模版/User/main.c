#include "stm32f10x.h"                  // Device header

int main(void){
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	GPIO_InitTypeDef GPIO_IniStructure;
	GPIO_IniStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_IniStructure.GPIO_Pin = GPIO_Pin_13;
	GPIO_IniStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC,&GPIO_IniStructure);
	GPIO_SetBits(GPIOC, GPIO_Pin_13);
	//GPIO_ResetBits(GPIOC, GPIO_Pin_13);
	while(1){
	}

}
