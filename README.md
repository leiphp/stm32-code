# stm32-code
使用寄存器点亮一个LED
## 项目说明  
* app中的源码是点亮一个LED的代码
* app2是实现8个LED流水灯的效果
## app2项目代码
* main.c
···c
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
	RCC_APB2ENR|=1<<4;	//¿ªÆôGPIOC¶Ë¿ÚÊ±ÖÓ


	GPIOC_CRL&=~(0x0f<<(4*0));	//0x1111Ò²¾ÍÊÇ0x0f
	GPIOC_CRL|=(3<<4*0);	//0x0011×óÒÆ0Î»±ä³É00000011£¬È»ºóºÍ¸Õ¸ÕµÄ*****0000È¡»ò£¬±ä³ÉÁË*****0011
	GPIOC_BSRR=(1<<(16+0));//BR0Îª1Ê±£¬¾ÍÄÜÊä³öµÍµçÆ½£¬µãÁÁLED1

	GPIOC_CRL&=~(0x0f<<(4*1));
	GPIOC_CRL|=(3<<4*1);
	GPIOC_BSRR=(1<<(1));//LED2°µ

	GPIOC_CRL&=~(0x0f<<(4*2));
	GPIOC_CRL|=(3<<4*2);
	GPIOC_BSRR=(1<<(2));//LED3°µ

	GPIOC_CRL&=~(0x0f<<(4*3));
	GPIOC_CRL|=(3<<4*3);
	GPIOC_BSRR=(1<<(3));//LED4°µ

	GPIOC_CRL&=~(0x0f<<(4*4));
	GPIOC_CRL|=(3<<4*4);
	GPIOC_BSRR=(1<<(4));//LED5°µ

	GPIOC_CRL&=~(0x0f<<(4*5));
	GPIOC_CRL|=(3<<4*5);
	GPIOC_BSRR=(1<<(5));//LED6°µ

	GPIOC_CRL&=~(0x0f<<(4*6));
	GPIOC_CRL|=(3<<4*6);
	GPIOC_BSRR=(1<<(6));//LED7°µ

	GPIOC_CRL&=~(0x0f<<(4*7));
	GPIOC_CRL|=(3<<4*7);
	GPIOC_BSRR=(1<<(7));//LED8°µ
	while(1)
	{
		GPIOC_BSRR=(1<<(16+0));//LED1ÁÁ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(0));//LED1°µ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+1));//LED2ÁÁ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(1));//LED2°µ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+2));//LED3ÁÁ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(2));//LED3°µ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+3));//LED4ÁÁ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(3));//LED4°µ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+4));//LED5ÁÁ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(4));//LED5°µ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+5));//LED6ÁÁ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(5));//LED6°µ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+6));//LED7ÁÁ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(6));//LED7°µ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+7));//LED8ÁÁ
		delay(0xffff1);
		GPIOC_BSRR=(1<<(7));//LED8°µ
		delay(0xffff1);
	}
}
```  
