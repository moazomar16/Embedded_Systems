/*
 * find_the_frequency_of_a_characters_in _a_string.c
 *
 *  Created on: Jan 22, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
void main(){
	char x[100],z;
	int i,count=0;
	printf("Enter a string:");
	fflush(stdout); fflush(stdin);
	gets(x);
	printf("Enter a character to find frequency:");
	fflush(stdout); fflush(stdin);
	scanf("%c",&z);
	for(i=0; i<100; i++){
		if(x[i]==z){
			count++;
		}
	}
	printf("frequency of %c = %d",z,count);
}

