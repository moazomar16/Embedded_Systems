/*
 * hw2_ex4.c
 *
 *  Created on: Jan 7, 2022
 *      Author: Moaz Omar
 */
#include"stdio.h"
void main(){
	float x;
	printf("Enter a NO.:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&x);
	if (x>0)
		printf("%.2f is a positive",x);
	else if (x<0)
		printf("%.2f is a negative",x);
	else
		printf("You entered Zero.");
}

