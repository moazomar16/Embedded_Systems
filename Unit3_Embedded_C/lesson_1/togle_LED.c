/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
*/
#include "stdint.h"
typedef volatile unsigned int vuint32_t;
#define RCC_BASE  0x40021000
#define GPIO_BASE 0x40010800

#define RCC_APB2ENR   *((volatile uint32_t * )(RCC_BASE    + 0x18))
#define GPIOA_CRH     *((volatile uint32_t * )(GPIO_BASE   + 0x04))
#define GPIOA_ODR     *((volatile uint32_t * )(GPIO_BASE   + 0x0c))
typedef union{
	vuint32_t     all_fields;
	struct{
		vuint32_t reserved:13;
		vuint32_t p_13:1;
	}pin;
}GPIOA_R;
volatile GPIOA_R *GPIO_PR =(volatile GPIOA_R*)(GPIO_BASE   + 0x0c);

int main (void){
	RCC_APB2ENR |=(1<<2);
	GPIOA_CRH &= 0xff0fffff;
	GPIOA_CRH |= 0x00200000;
	int i;
	while(1){
		GPIO_PR->pin.p_13 =1;
		for(i=0 ;i<5000; i++);
		GPIO_PR->pin.p_13 =0;
		for(i=0 ;i<5000; i++);
	}
}
