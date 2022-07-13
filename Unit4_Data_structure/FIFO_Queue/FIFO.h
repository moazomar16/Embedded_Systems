/*
 * FIFO.h
 *
 *  Created on: Jul 13, 2022
 *      Author: Moaz Omar
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "stdint.h"
#include "stdlib.h"
#include "stdio.h"

/*	 User configuration
 	 select the element  data type */
#define element_DataType uint8_t

// Buffer length
#define width 5

//FIFO definition
typedef struct{
	element_DataType length;
	element_DataType count;
	element_DataType* base;
	element_DataType* head;
	element_DataType* tail;
}FIFO_BUFFER_t;

// FIFO status
typedef enum{
	FIFO_no_erorr,
	FIFO_null,
	FIFO_full,
	FIFO_not_full,
	FIFO_empty,
	FIFO_not_empty
}FIFO_status;

// APIs
FIFO_status FIFO_init(FIFO_BUFFER_t* fifo ,element_DataType* buff , element_DataType length);
FIFO_status FIFO_Valid(FIFO_BUFFER_t* fifo );
FIFO_status FIFO_Full(FIFO_BUFFER_t* fifo );
FIFO_status FIFO_Empty(FIFO_BUFFER_t* fifo );
FIFO_status FIFO_Enqueue(FIFO_BUFFER_t* fifo , element_DataType item);
FIFO_status FIFO_Dequeue(FIFO_BUFFER_t* fifo ,element_DataType* item);
FIFO_status FIFO_print(FIFO_BUFFER_t* fifo );

#endif /* FIFO_H_ */
