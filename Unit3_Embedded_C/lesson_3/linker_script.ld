/*
prepared by 
eng.Moaz Oamr*/

MEMORY
{
	flash(RX) : ORIGIN = 0x08000000 , LENGTH = 128k
	sram(RWX) : ORIGIN = 0x20000000 , LENGTH = 20k
}

SECTIONS
{
	.text : {
		*(.vectors*)
		*(.text*)
		E_text = . ;
	} >flash
	
	.data :{
		S_data = .;
		*(.data*)
		E_data = .;
	}> sram AT> flash
	
	.bss : {
	S_bss = . ;
	*(.bss*)
	E_bss = .;
	. = ALIGN(4);
	. = . + 1000;
	stack_top = .; 
	} > sram
}