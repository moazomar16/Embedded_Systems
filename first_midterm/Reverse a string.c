/*
 * 112.c
 *
 *  Created on: Mar 10, 2022
 *      Author: Moaz Omar
 */

#include "stdio.h"
#include "string.h"
void Reverse(char x[],int limit);
void main(){
	char x[100];
	int i,limit;
	printf("Enter a string:");
	fflush(stdout); fflush(stdin);
	gets(x);
	limit=strlen(x)-1;
	Reverse(x,limit);
}
void Reverse(char x[],int limit){
	char swap;
	int i;
	for(i=0;i<limit;i++){
		swap=x[limit];
		x[limit]=x[i];
		x[i]=swap;
		limit--;
	}
	printf("reverse_string is %s",x);
}
