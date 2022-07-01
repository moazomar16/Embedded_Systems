#include "stdint.h"

extern int main();
extern unsigned int E_text;
extern unsigned int S_data;
extern unsigned int E_data;
extern unsigned int S_bss;
extern unsigned int E_bss;

volatile unsigned long stack_top[256];

void reset_handler();
void Default_Handler(){
	reset_handler();
}
void NMI_falut()__attribute__((weak,alias("Default_Handler")));;
void hard_falut()__attribute__((weak,alias("Default_Handler")));;
void memory_management_falut()__attribute__((weak,alias("Default_Handler")));;
void bus_falut()__attribute__((weak,alias("Default_Handler")));;
void usage_falut()__attribute__((weak,alias("Default_Handler")));;
void reserved_0()__attribute__((weak,alias("Default_Handler")));;
void reserved_1()__attribute__((weak,alias("Default_Handler")));;
void reserved_2()__attribute__((weak,alias("Default_Handler")));;
void reserved_3()__attribute__((weak,alias("Default_Handler")));;
void SV_Call()__attribute__((weak,alias("Default_Handler")));;
void reserved_for_debug()__attribute__((weak,alias("Default_Handler")));;
void reserved_4()__attribute__((weak,alias("Default_Handler")));;
void pendSV()__attribute__((weak,alias("Default_Handler")));;
void systick()__attribute__((weak,alias("Default_Handler")));;
void IRQ_0()__attribute__((weak,alias("Default_Handler")));;
void IRQ_1()__attribute__((weak,alias("Default_Handler")));;

void (* const g_ptr_func_vectors[])()__attribute__((section(".vectors")))=
{
	(void (*)()) ((unsigned long)stack_top+sizeof(stack_top)),
	&NMI_falut,
	&hard_falut,
	&memory_management_falut,
	&bus_falut,
	&usage_falut,
	&reserved_0,
	&reserved_1,
	&reserved_2,
	&reserved_3,
	&SV_Call,
	&reserved_for_debug,
	&reserved_4,
	&pendSV,
	&systick,
	&IRQ_0,
	&IRQ_1
};

void reset_handler()
{
	unsigned int data_size;
	data_size = ( unsigned char*)&E_data - ( unsigned char*)&S_data;
	unsigned char * P_source = ( unsigned char*)&E_text;
	unsigned char * P_destination = ( unsigned char*)&E_text;
	int i;
	for(i=0; i<data_size; i++)
	*((unsigned char*)P_destination++) = *((unsigned char*)P_source++);
	unsigned int bss_size ;
	bss_size =(unsigned char*)&E_bss - (unsigned char*)&S_bss;
	P_destination =(unsigned char *)&S_bss;
	for(i=0; i<bss_size; i++)
	*((unsigned char*)P_destination++) =(unsigned char) 0;
	main();
}
