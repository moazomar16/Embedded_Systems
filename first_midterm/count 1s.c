/*
 * 112.c
 *
 *  Created on: Mar 10, 2022
 *      Author: Moaz Omar
 */


#include "stdio.h"
int count1s(int num);
void main() {
	int num;
	printf("Enter a Number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	printf("the number of 1s in binary representation of %d is %d",num,count1s(num));
}

//int count1s(int num){
//	int count=0;
//	if(num==0)
//		return 0;
//	while (num > 0) {
//		if (num & 1)
//			count++;
//		num=num >> 1;
//	}
//	return count;
//}
//***************-another way-*********************
int count1s(int num){
	if(num==0)
		return 0;
	return (num & 1)+ count1s(num>>1);
}



