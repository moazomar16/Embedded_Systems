/*
 * 112.c
 *
 *  Created on: Mar 10, 2022
 *      Author: Moaz Omar
 */

#include "stdio.h"
#include "string.h"
int Max1s(int num);
void main(){
	int num,result;
	printf("Enter a Number ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	result=Max1s(num);
	if (result==-1)
		printf("there is no 1s or there is only 1 ");
	printf("Max number of 1s between two zeros in the binary representation is %d",result);


}
int Max1s(int num){
	int i,j,scanbits=1,firstZero=0,secondZero,max1;
	if (num == 0 || (num & (num - 1)) == 0)
	        return -1;
	for(i=0; i<=32; i++){
		firstZero++;
		if((num & scanbits)==0){
			scanbits=scanbits << 1;
			break;
		}
		scanbits=scanbits << 1;
	}
	secondZero=firstZero;
	max1=0;
	for(j=i+1; j<=32; j++){
		secondZero++;
		if((num & scanbits)==0){
			if(max1<(secondZero-firstZero-1))
				max1=secondZero-firstZero-1;
			firstZero=secondZero;
		}
		scanbits=scanbits << 1;
	}
	return max1;
}
