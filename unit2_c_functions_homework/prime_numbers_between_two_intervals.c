/*
 * prime_numbers_between_two_intervals.c
 *
 *  Created on: Feb 18, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
int check_prime(int z);

void main(){
	int i,x,y,result;
	printf("enter two numbers (intervals)");
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&x,&y);
	while(x<0 || y<0 ){
		printf("Error!!! there is no prime numbers between %d and %d because prime numbers must be grater than 1  ",x,y);
		printf("re-enter two numbers (intervals)");
		fflush(stdout); fflush(stdin);
		scanf("%d %d",&x,&y);
	}
	if(x==1 && y==2)
		printf("prime numbers between %d and %d are:%d\t",x,y,y);
	printf("prime numbers between %d and %d are:\t",x,y);
	for(i=x; i<=y; i++){
		result= check_prime(i);
		if(result == 0)
			printf("%d \t",i);

	}
}
int check_prime(int z){
	int c,result=0;
	for(c=2; c<=z/2; c++){
	if (z%c==0){
		result=1;
		break;
	}
	}
	return result;
}
