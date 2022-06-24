// prepared by 
//Eng.Moaz Omar
#include "stdint.h"
typedef volatile unsigned int vuint32_t;
#define RCC_BASE       0x40021000
#define GPIOPA_BASE    0x40010800
#define RCC_APB2ENR    *(vuint32_t *)(RCC_BASE    +  0x18)
#define GPIOPA_CRH     *(vuint32_t *)(GPIOPA_BASE +  0x04)
#define GPIOPA_ODR     *(vuint32_t *)(GPIOPA_BASE +  0x0c)
static int x;
typedef union
{
	vuint32_t     all_fields;
	struct 
	{
		vuint32_t reserved:13;
		vuint32_t p_13:1;
	}Pin;
}R_ODR_t;
volatile R_ODR_t* R_ODR =(volatile R_ODR_t*)(GPIOPA_BASE +0x0c);

int main()
{
	RCC_APB2ENR |=1<<2;
	GPIOPA_CRH &=0xff0fffff;
	GPIOPA_CRH |=0x00200000;
	while(1){
		R_ODR->Pin.p_13=1;
		int i;
		for(i=0;i<5000;i++);
		R_ODR->Pin.p_13=0;
		for(i=0;i<5000;i++);
	}
	return 0;
}