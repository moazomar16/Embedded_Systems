/*
 * LIFO.c
 *
 *  Created on: Jul 13, 2022
 *      Author: Moaz Omar
 */
#include "LIFO.h"

Buffer_status LIFO_init(LIFO_BUFF_t* Buf,element_DataType* arr){
	// check if the lifo is valid
	if( LIFO_Valid(Buf)== LIFO_no_erorr){
		// Initializing base, head,resetting count and setting length
		Buf->base=arr;
		Buf->head=arr;
		Buf->count=0;
		Buf->length= width;
		return LIFO_no_erorr;
	}
	else{
		printf("\n\t Buffer is not valid");
		return LIFO_NULL;
}
}

// adding item to lifo
Buffer_status LIFO_Add(LIFO_BUFF_t* Buf,element_DataType item){
	// check if the lifo is valid
		if(LIFO_Valid(Buf)== LIFO_no_erorr){
			// check if the lifo is full
			if(LIFO_Full(Buf)== LIFO_not_full){
				// adding item to lifo and increasing head and count
				*(Buf->head)=item;
				Buf->head++;
				Buf->count++;
				return LIFO_no_erorr;
			}
			else
				return LIFO_full;
		}
		else
			return LIFO_NULL;
}
Buffer_status LIFO_Remove(LIFO_BUFF_t* Buf,element_DataType* item){
	// check if the lifo is valid
			if(LIFO_Valid(Buf)== LIFO_no_erorr){
				// check if the lifo is empty
				if(LIFO_Empty(Buf)== LIFO_not_empty){
					// removing item from lifo and decreasing head and count
					Buf->head--;
					*item = *(Buf->head);
					Buf->count--;
					return LIFO_no_erorr;
				}
				else
					return LIFO_empty;
			}
			else
				return LIFO_NULL;
}

// check if the lifo is full
Buffer_status LIFO_Full(LIFO_BUFF_t* Buf){
	// check if the lifo is valid
	if(LIFO_Valid(Buf)== LIFO_no_erorr){
		// check if the lifo is full
		if(Buf->head >= (Buf->base +Buf->length))
			return LIFO_full;
		else
			return LIFO_not_full;
	}
	else
		return LIFO_NULL;

}

// check to see if the buffer exist or not
Buffer_status LIFO_Valid(LIFO_BUFF_t* Buf){
	if( !Buf || !Buf->head || !Buf->base )
		return LIFO_NULL;
	else
		return LIFO_no_erorr;
}

// check if lifo is empty
Buffer_status LIFO_Empty(LIFO_BUFF_t* Buf){
	// check if the lifo is valid
		if(LIFO_Valid(Buf)== LIFO_no_erorr){
			// check if the lifo is empty
			if(Buf->head == Buf->base)
				return LIFO_empty;
			else
				return LIFO_not_empty;
		}
		else
			return LIFO_NULL;
}


