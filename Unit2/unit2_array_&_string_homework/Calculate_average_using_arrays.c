/*
 * Calculate_average_using_arrays.c
 *
 *  Created on: Jan 21, 2022
 *      Author: Moaz Omar
 */
#include"stdio.h"
void main(){
	float a[100],average=0,sum=0;
	int i,n;
	printf("Enter the NO of data:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	while (n>100 ||n<=0){
		printf("Error!!! the No of data should be in range of 0 to 100 \nEnter the NO of data:");
		fflush(stdout); fflush(stdin);
		scanf("%d",&n);
	}
	for (i=0; i<n; i++){
		printf("%d. Enter number: ",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	average=sum/n;
	printf("Average=%.2f",average);
}

