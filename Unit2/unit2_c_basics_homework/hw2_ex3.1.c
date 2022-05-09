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
		printf ("Largest NO. =%.2f",(z>y)?z:y);
	else
		printf ("Largest NO. =%.2f",(x>y)?x:y);

}

