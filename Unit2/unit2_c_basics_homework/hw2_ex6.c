/*
 * hw2_ex6.c
 *
 *  Created on: Jan 7, 2022
 *      Author: Moaz Omar
 */
#include"stdio.h"
void main(){
	int x,sum=0,i;
	printf("enter a no.:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	for (i=0 ;i<=x;i++)
		sum+=i;
	printf("sum=%d",sum);
}

