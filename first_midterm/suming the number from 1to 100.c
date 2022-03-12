/*
 * 112.c
 *
 *  Created on: Mar 10, 2022
 *      Author: Moaz Omar
 */


#include "stdio.h"
static int x=0;
int SumNumber(int x);
void main(){
	printf("summing the numbers from 1 to 100\n");
	printf("the summition is %d",SumNumber(x));
}
int SumNumber(int x){
	if(x<100)
		return x + SumNumber(x+1);
}
////******************-another way-******************
//
//int SumNumber(int x){
//		return 100*(100+1)/2;
//}

