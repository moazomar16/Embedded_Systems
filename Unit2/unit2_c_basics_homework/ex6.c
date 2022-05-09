/*
 * ex6.c
 *
 *  Created on: Jan 4, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
void main (){
	float a,b,c;
	printf("Enter value of a:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&b);
	c=a; a=b; b=c;
	printf("After swapping, value of a =%.2f",a);
	printf("\n After swapping, value of b =%.2f",b);

}


