/*
 * calculate_the_power_of_a_number_using_resursion.c
 *
 *  Created on: Feb 18, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
int calculate_power(int i,int y);
void main(){
	int base, power;
	printf("Enter a base number ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&base);
	printf("Enter power number (positive integer) ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&power);
	while(base<=0 || power<=0){
		printf("base and power must be positive numbers \n");
		printf("Enter a base number ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&base);
		printf("Enter power number (positive integer )");
		fflush(stdout); fflush(stdin);
		scanf("%d",&power);
	}
	printf("%d ^ %d = %d",base,power,calculate_power(base,power));
}
int calculate_power(int base,int power){
	while(power!=0)
		return (base*calculate_power(base,--power));
}
