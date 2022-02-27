/*
 * reverse_string.c
 *
 *  Created on: Jan 22, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
#include "string.h"
void main(){
	char x[100],swap;
	int i,j,count=0;
	printf("Enter a string:");
	fflush(stdout); fflush(stdin);
	gets(x);
	j=strlen(x)-1;
	for(i=0;i<j;i++){
		swap=x[j];
		x[j]=x[i];
		x[i]=swap;
		j--;
	}
	printf("reverse_string is %s",x);
}
