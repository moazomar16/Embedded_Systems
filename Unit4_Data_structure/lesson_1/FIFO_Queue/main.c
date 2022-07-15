/*
 * main.c
 *
 *  Created on: Jul 13, 2022
 *      Author: Moaz Omar
 */


#include "FIFO.h"

int main(){
	element_DataType i,temp;
	// create static buffer
	element_DataType Uart_buf[width];
	// create dynamic buffer
	element_DataType* I2C_buf =(element_DataType*)malloc(width* sizeof(element_DataType));

	// create FIFO
	FIFO_BUFFER_t Uart_fifo, I2C_fifo;
	// Initializing fifo
	if(  FIFO_init(&Uart_fifo, Uart_buf, width) == FIFO_no_erorr)
		printf("\n Initializing uart fifo....\t\t[DONE]");
	else
		printf("\n Initializing uart fifo....\t\t[FAILD]");

	if(  FIFO_init(&I2C_fifo, I2C_buf, width) == FIFO_no_erorr)
		printf("\n Initializing I2C fifo....\t\t[DONE]");
	else
		printf("\n Initializing I2C fifo....\t\t[FAILD]");

	// adding data to fifo
	for(i=0;i<7;i++){
		if(FIFO_Enqueue(&Uart_fifo, i)== FIFO_no_erorr )
			printf("\n FIFO Enqueue (%x).....\t\t[DONE]",i);
		else
			printf("\n FIFO Enqueue (%x).....\t\t[FAILD]",i);
	}
	// printing fifo
	FIFO_print(&Uart_fifo);
	for(i=0;i<2;i++){
	if(	FIFO_Dequeue(&Uart_fifo, &temp)==FIFO_no_erorr )
		printf("\n FIFO DEqueue (%x).....\t\t[DONE]",temp);
	else
		printf("\n FIFO Dequeue (%c).....\t\t[FAILD]",'x');
	}
	FIFO_print(&Uart_fifo);
	// adding data to fifo
	for(i=0;i<3;i++){
		if(FIFO_Enqueue(&Uart_fifo, i)== FIFO_no_erorr )
			printf("\n FIFO Enqueue (%x).....\t\t[DONE]",i);
		else
			printf("\n FIFO Enqueue (%x).....\t\t[FAILD]",i);

		// printing fifo
		FIFO_print(&Uart_fifo);

		for(i=0;i<7;i++){
			if(FIFO_Enqueue(&I2C_fifo, i)== FIFO_no_erorr )
				printf("\n FIFO Enqueue (%x).....\t\t[DONE]",i);
			else
				printf("\n FIFO Enqueue (%x).....\t\t[FAILD]",i);
		}
		// printing fifo
		FIFO_print(&I2C_fifo);
		if(	FIFO_Dequeue(&I2C_fifo, &temp)==FIFO_no_erorr )
			printf("\n FIFO DEqueue (%x).....\t\t[DONE]",temp);
		else
			printf("\n FIFO Dequeue (%c).....\t\t[FAILD]",'x');
		FIFO_print(&I2C_fifo);
	}
}
