#include "Uart.h"
unsigned char string_buffer[100]="learn_in_depth:<Moaz>";

void main()
{
	UART_Send_string(string_buffer);
}