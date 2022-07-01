// prepared by 
//Eng.Moaz Omar
#include "stdint.h"
typedef volatile unsigned long vuint32_t;
#define SYSCTL_RCGC2_R       (*((vuint32_t *) 0x400FE108))
#define GPIO_PORTF_DIR_R     (*((vuint32_t *) 0x40025400)) 
#define GPIO_PORTF_DATA_R    (*((vuint32_t *) 0x400253FC))
#define GPIO_PORTF_DEN_R     (*((vuint32_t *) 0x4002551C))

int main()
{
	vuint32_t delay_counter;
	SYSCTL_RCGC2_R =0x20;
	for(delay_counter=0 ;delay_counter<200;delay_counter++);
	GPIO_PORTF_DIR_R |=1<<3;
	GPIO_PORTF_DEN_R |=1<<3;
	while(1){
		GPIO_PORTF_DATA_R |=1<<3;
		for(delay_counter=0;delay_counter<20000;delay_counter++);
		GPIO_PORTF_DATA_R &=~(1<<3);
		for(delay_counter=0;delay_counter<20000;delay_counter++);
	}
	
	return 0;
}