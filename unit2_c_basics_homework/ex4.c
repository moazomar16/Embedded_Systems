/*
 * ex4.c
 *
 *  Created on: Jan 4, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
void main(){
	float x,y,z;
	printf("Enter Two numbers:");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&x,&y);
	z=x*y;
	printf("\nProduct: %f",z);
}

