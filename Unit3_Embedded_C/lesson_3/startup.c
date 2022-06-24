#include "stdint.h"
extern int main();
extern unsigned int S_data;
extern unsigned int E_data;
extern unsigned int S_bss;
extern unsigned int E_bss;
extern unsigned int E_text;
extern unsigned int stack_top;

void reset_handler(void);
void Default_Handler (void){
	reset_handler();
}
void NMI (void)__attribute__((weak,alias("Default_Handler")));;
void hard_fault (void)__attribute__((weak,alias("Default_Handler")));;
void mm_fault (void)__attribute__((weak,alias("Default_Handler")));;
void bus_fault (void)__attribute__((weak,alias("Default_Handler")));;
void usage_fault (void)__attribute__((weak,alias("Default_Handler")));;



uint32_t vectors[]__attribute__((section(".vectors")))={
	(uint32_t) &stack_top,
	(uint32_t) &reset_handler,
	(uint32_t) &NMI,
	(uint32_t) &hard_fault,
	(uint32_t) &mm_fault,
	(uint32_t) &bus_fault,
	(uint32_t) &usage_fault

};

void reset_handler(void){
	unsigned int Data_size=(unsigned char*)&E_data - (unsigned char*)&S_data;
	unsigned char* P_sorce=(unsigned char*)&E_text;
	unsigned char* P_dis=(unsigned char*)&S_data;
	int i;
	for(i=0;i<Data_size;i++)
		*((unsigned char*)P_dis++)=*((unsigned char*)P_sorce++) ;
	
	unsigned int bss_size=(unsigned char*)&E_bss-(unsigned char*)&S_bss ;
	P_dis=(unsigned char*)&S_bss ;
	for(i=0;i<bss_size;i++)
		*((unsigned char*)P_dis++)= (unsigned char) 0 ;
	main();
}