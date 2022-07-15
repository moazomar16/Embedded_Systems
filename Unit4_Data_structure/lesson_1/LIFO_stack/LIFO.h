/*
 * LIFO.h
 *
 *  Created on: Jul 13, 2022
 *      Author: Moaz Omar
 */

#ifndef LIFO_H_
#define LIFO_H_

#include "stdint.h"
#include "stdlib.h"
#include "stdio.h"

//stack Configuration
// chose the LIFO data type.... uint8_t  uint16_t  uint32_t ....
#define element_DataType uint32_t
#define width 5

//type definitions
typedef struct{
	element_DataType length;
	element_DataType count;
	element_DataType* base;
	element_DataType* head;
}LIFO_BUFF_t;

typedef enum{
	LIFO_no_erorr,
	LIFO_full,
	LIFO_not_full,
	LIFO_empty,
	LIFO_not_empty,
	LIFO_NULL
}Buffer_status;

// APIs
Buffer_status LIFO_init(LIFO_BUFF_t* Buf,element_DataType* arr);
Buffer_status LIFO_Add(LIFO_BUFF_t* Buf,element_DataType item);
Buffer_status LIFO_Remove(LIFO_BUFF_t* Buf,element_DataType* item);
Buffer_status LIFO_Full(LIFO_BUFF_t* Buf);
Buffer_status LIFO_Valid(LIFO_BUFF_t* Buf);
Buffer_status LIFO_Empty(LIFO_BUFF_t* Buf);




#endif /* LIFO_H_ */
