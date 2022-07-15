/*
 * main.c
 *
 *  Created on: Jul 13, 2022
 *      Author: Moaz Omar
 */

#include"LIFO.h"


int main() {
	element_DataType i,temp;
	// static buffer
	element_DataType Uart[width];
	// dynamic buffer
	element_DataType* I2C =(element_DataType*)malloc(5*sizeof(element_DataType));

	LIFO_BUFF_t Uart_buffer, I2c_buffer;
	// initializing buffers
	if(		LIFO_init(&Uart_buffer, &Uart) == LIFO_no_erorr)
		printf("	\n UART LIFO Initialized successfully");
	else
		printf("	\n UART LIFO Initialization failed" );
	if(		LIFO_init(&I2c_buffer, I2C) == LIFO_no_erorr)
		printf("	\n I2C LIFO Initialized successfully");
	else
		printf("	\n I2C LIFO Initialization failed" );
	// adding data to lifo
	for(i=0;i<7;i++){
		if(		LIFO_Add(&Uart_buffer, i) == LIFO_no_erorr)
			printf("\n\t added %d to UART LIFO ",i);
		else
			printf("\n\t failed to add %d to UART LIFO",i );
	}
	// removing data
	for(i=0;i<7;i++){
		if(		LIFO_Remove(&Uart_buffer, &temp) == LIFO_no_erorr)
			printf("\n\t Removed %d from UART LIFO ",temp);
		else
			printf("\n\t failed to Removed element from UART LIFO ");
	}

	// adding data to lifo
	for(i=0;i<7;i++){
		if(		LIFO_Add(&I2c_buffer, i) == LIFO_no_erorr)
			printf("\n\t added %d to UART LIFO ",i);
		else
			printf("\n\t failed to add %d to UART LIFO",i );
	}
	// removing data
	for(i=0;i<7;i++){
		if(		LIFO_Remove(&I2c_buffer, &temp) == LIFO_no_erorr)
			printf("\n\t Removed %d from UART LIFO ",temp);
		else
			printf("\n\t failed to Removed element from UART LIFO ");
	}

}

