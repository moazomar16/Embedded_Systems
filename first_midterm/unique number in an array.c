/*
 * 112.c
 *
 *  Created on: Mar 10, 2022
 *      Author: Moaz Omar
 */


#include "stdio.h"
static int x=0;
void UniqeNumber(int a[],int limit);
void main(){
	int a[20],i,limit;
	printf("Enter the NO of elements:");
	fflush(stdout); fflush(stdout);
	scanf("%d",&limit);
	printf("Enter the elements:");
	fflush(stdout); fflush(stdout);
	for (i=0; i<limit; i++)
		scanf("%d",&a[i]);
	UniqeNumber(a,limit);
}
void UniqeNumber(int a[],int limit){
	printf("%d\n",x);
	int i,count=0,target;
	for(i=0; i<limit; i++){
		if(a[x]==a[i]){
			count++;
			target=a[x];}}
		if (count!=1){
			x++;
			UniqeNumber(a,limit);}
		else
			printf("the unique number in the array is %d",target);
}




