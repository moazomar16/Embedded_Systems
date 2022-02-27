/*
 * find_the_length_of_a_string.c
 *
 *  Created on: Jan 22, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
void main(){
	char x[100];
	int i,count=0;
	printf("Enter a string:");
	fflush(stdout); fflush(stdin);
	gets(x);
	for(i=0; x[i]!=0; i++){
			count++;
		}
	printf("lenght of string = %d",count);
}


