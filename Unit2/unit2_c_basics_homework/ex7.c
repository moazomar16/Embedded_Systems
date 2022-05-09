/*
 * ex7.c
 *
 *  Created on: Jan 4, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
void main (){
	float a,b;
	printf("Enter value of a:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;

	printf("After swapping, value of a =%.2f",a);
	printf("\n After swapping, value of b =%.2f",b);

}



