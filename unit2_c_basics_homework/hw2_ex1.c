/*
 * hw2_ex1.c
 *
 *  Created on: Jan 7, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
void main()
{
	int x;
	printf("Enter An Integer You Want To Check: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	if (x%2==0)
		printf("%d is even ",x);
	else
		printf("%d is odd",x);
}
