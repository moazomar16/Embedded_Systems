/*
 * hw2_ex5.c
 *
 *  Created on: Jan 7, 2022
 *      Author: Moaz Omar
 */
#include"stdio.h"
void main(){
	char x;
	printf("Enter a character:");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);
	if ((x>=65 && x<=90)||(x>=97 && x<=122) )
		printf("%c is an alphabet",x);
	else
		printf("%c is not an alphabet",x);
}

