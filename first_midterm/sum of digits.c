/*
 * 112.c
 *
 *  Created on: Mar 10, 2022
 *      Author: Moaz Omar
 */


#include "stdio.h"
#include "math.h"
int sum(int num);
void main(){
	double num;
	printf("enter a number");
	fflush(stdout); fflush(stdin);
	scanf("%lf",&num);
	printf("the sum of digits is %d",sum(num));
}

int sum(int num){
	int rem,s=0;
	while(num>0){
	rem=num%10;
	s+=rem;
	num/=10;
	}
	return s;
}


