/*
 * FIFO.c
 *
 *  Created on: Jul 13, 2022
 *      Author: Moaz Omar
 */
#include "FIFO.h"
// initialize fifo
FIFO_status FIFO_init(FIFO_BUFFER_t* fifo ,element_DataType* buff , element_DataType length){
	// Check if fifo is valid
	if(FIFO_Valid(fifo)== FIFO_no_erorr){
		fifo->base=buff;
		fifo->head=buff;
		fifo->tail=buff;
		fifo->length=length;
		fifo->count=0;
		return FIFO_no_erorr;
	}
	else
		return FIFO_null;
}

// check if fifo is valid
FIFO_status FIFO_Valid(FIFO_BUFFER_t* fifo ){
	if(!fifo->base || !fifo->head || !fifo->tail )
		return FIFO_null;
	else
		return FIFO_no_erorr;
}

// check if the fifo is full
FIFO_status FIFO_Full(FIFO_BUFFER_t* fifo ){
	// check if fifo is valid
	if(FIFO_Valid(fifo)== FIFO_no_erorr){
		if(fifo->count >= fifo->length  )
			return FIFO_full;
		else
			return FIFO_not_full;
	}
	else
		return FIFO_null;

}

// check if the fifo is empty
FIFO_status FIFO_Empty(FIFO_BUFFER_t* fifo ){
	if(FIFO_Valid(fifo)== FIFO_no_erorr){
		if(fifo->count==0)
			return FIFO_empty;
		else
			return FIFO_not_empty;
	}
	else
		return FIFO_null;
}

// adding data to queue
FIFO_status FIFO_Enqueue(FIFO_BUFFER_t* fifo , element_DataType item){
	if(FIFO_Valid(fifo)== FIFO_no_erorr){
		if(FIFO_Full(fifo)== FIFO_not_full){
			*(fifo->head)=item;
			fifo->count++;
			// making sure that fifo is circular
			if(fifo->head>=(fifo->base + (fifo->length* sizeof(element_DataType))))
				fifo->head = fifo->base;
			else
				fifo->head ++;
			return FIFO_no_erorr;
		}
		else
			return FIFO_full;
	}
	else
		return FIFO_null;
}

// removing data from queue
FIFO_status FIFO_Dequeue(FIFO_BUFFER_t* fifo ,element_DataType* item){

	if(FIFO_Valid(fifo)== FIFO_no_erorr){
		if(FIFO_Empty(fifo)== FIFO_not_empty){
			*item=*(fifo->tail);
			fifo->count--;
			// making sure that fifo is circular
			if(fifo->tail>=(fifo->base + (fifo->length* sizeof(element_DataType))))
				fifo->tail = fifo->base;
			else
				fifo->tail ++;
			return FIFO_no_erorr;
		}
		else
			return FIFO_empty;
	}
	else
		return FIFO_null;
}

// printing queue
FIFO_status FIFO_print(FIFO_BUFFER_t* fifo ){
	if(FIFO_Valid(fifo)== FIFO_no_erorr){
		if(FIFO_Empty(fifo)== FIFO_not_empty){
			element_DataType* temp;
			element_DataType i;
			temp=fifo->tail;
			printf("\n############# FIFO Print #############");
			for(i=0; i<fifo->count;i++){
				printf("\n\t(%x)\t",*temp);
				temp++;
			}
			printf("\n######################################");
			return FIFO_no_erorr;
		}
		else{
			printf("FIFO is Empty");
			return FIFO_empty;
		}
	}
	else
		return FIFO_null;
}







