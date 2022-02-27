/*
 * hw2_ex7.c
 *
 *  Created on: Jan 7, 2022
 *      Author: Moaz Omar
 */
#include"stdio.h"
void main(){
	int x,sum=1,i;
	printf("enter an integer:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	if (x>0){
	for (i=1 ;i<=x;i++)
		sum*=i;
	printf("factorial=%d",sum);
	}
	else if(x==0)
		printf("Factorial = 1");
	else
		printf("Erorr!! factorial of negative numbers does not exist");
}

