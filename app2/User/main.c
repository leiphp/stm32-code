#include "stm32f10x.h"

typedef unsigned int u32;

void SystemInit()
{
	
}
void delay(u32 i){
	while(i--);
}

int main()
{
	RCC_APB2ENR|=1<<4;	//开启GPIOC端口时钟
	
	
	GPIOC_CRL&=~(0x0f<<(4*0));	//0x1111也就是0x0f
	GPIOC_CRL|=(3<<4*0);	//0x0011左移0位变成00000011，然后和刚刚的*****0000取或，变成了*****0011
	GPIOC_BSRR=(1<<(16+0));//BR0为1时，就能输出低电平，点亮LED1
	
	GPIOC_CRL&=~(0x0f<<(4*1));
	GPIOC_CRL|=(3<<4*1);
	GPIOC_BSRR=(1<<(1));//LED2暗
	
	GPIOC_CRL&=~(0x0f<<(4*2));
	GPIOC_CRL|=(3<<4*2);
	GPIOC_BSRR=(1<<(2));//LED3暗
	
	GPIOC_CRL&=~(0x0f<<(4*3));
	GPIOC_CRL|=(3<<4*3);
	GPIOC_BSRR=(1<<(3));//LED4暗
	
	GPIOC_CRL&=~(0x0f<<(4*4));
	GPIOC_CRL|=(3<<4*4);
	GPIOC_BSRR=(1<<(4));//LED5暗
	
	GPIOC_CRL&=~(0x0f<<(4*5));
	GPIOC_CRL|=(3<<4*5);
	GPIOC_BSRR=(1<<(5));//LED6暗
	
	GPIOC_CRL&=~(0x0f<<(4*6));
	GPIOC_CRL|=(3<<4*6);
	GPIOC_BSRR=(1<<(6));//LED7暗
	
	GPIOC_CRL&=~(0x0f<<(4*7));
	GPIOC_CRL|=(3<<4*7);
	GPIOC_BSRR=(1<<(7));//LED8暗
	while(1)
	{
		GPIOC_BSRR=(1<<(16+0));//LED1亮
		delay(0xffff1);
		GPIOC_BSRR=(1<<(0));//LED1暗
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+1));//LED2亮
		delay(0xffff1);
		GPIOC_BSRR=(1<<(1));//LED2暗
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+2));//LED3亮
		delay(0xffff1);
		GPIOC_BSRR=(1<<(2));//LED3暗
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+3));//LED4亮
		delay(0xffff1);
		GPIOC_BSRR=(1<<(3));//LED4暗
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+4));//LED5亮
		delay(0xffff1);
		GPIOC_BSRR=(1<<(4));//LED5暗
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+5));//LED6亮
		delay(0xffff1);
		GPIOC_BSRR=(1<<(5));//LED6暗
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+6));//LED7亮
		delay(0xffff1);
		GPIOC_BSRR=(1<<(6));//LED7暗
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+7));//LED8亮
		delay(0xffff1);
		GPIOC_BSRR=(1<<(7));//LED8暗
		delay(0xffff1);
	}
}



