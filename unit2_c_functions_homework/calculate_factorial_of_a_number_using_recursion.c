/*
 * calculate_factorial_of_a_number_using_recursion.c
 *
 *  Created on: Feb 18, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
int factorial(int i);
void main(){
	int x;
	printf("Enter a positive integer ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	while(x<0)
	{
		printf("Error!!! Re-enter a positive integer ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&x);
	}
	printf("Factorial of %d = %d",x,factorial(x));

}
int factorial(int i){
	while(i!=1)
		return i*factorial(i-1);
}

