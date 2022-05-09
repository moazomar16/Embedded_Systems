/*
 * hw2_ex8.c
 *
 *  Created on: Jan 7, 2022
 *      Author: Moaz Omar
 */
#include"stdio.h"
void main(){
	char z;
	float x,sum=0,y;
	printf("enter operator either + or - or * or /: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&z);
	printf("enter two numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&x,&y);
	switch(z)
	{
	case '+':
		sum=x+y;
		printf("%0.2f + %0.2f =%0.2f",x,y,sum);
		break;
	case '-':
		sum=x-y;
		printf("%0.2f - %0.2f =%0.2f",x,y,sum);
		break;
	case '*':
		sum=x*y;
		printf("%0.2f * %0.2f  =%0.2f",x,y,sum);
		break;
	case '/':
		sum=x/y;
		printf("%0.2f / %0.2f =%0.2f",x,y,sum);
		break;
	default:
		printf("Error Wrong operator");
	}


}


