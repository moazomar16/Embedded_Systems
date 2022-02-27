/*
 * hw2_ex3.c
 *
 *  Created on: Jan 7, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
void main(){
	float z,x,y;
	printf("Enter Three No.:");
	fflush(stdout); fflush(stdin);
	scanf("%f %f %f",&z,&x,&y);
	if(z>x)
		if(z>y)
			printf ("Largest NO. =%.2f",z);
		else
			printf("Largest NO. =%.2f",y);
	else
		if(x>y)
					printf ("Largest NO. =%.2f",x);
				else
					printf("Largest NO. =%.2f",y);
}

