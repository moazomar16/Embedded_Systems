/*
 * search_for_an_element_in_array.c
 *
 *  Created on: Jan 21, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
void main(){
	int a[20],i,n,num,location,found_it=0;
	printf("Enter the NO of elements:");
	fflush(stdout); fflush(stdout);
	scanf("%d",&n);
	printf("Enter the elements:");
	fflush(stdout); fflush(stdout);
	for (i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched:");
	fflush(stdout); fflush(stdout);
	scanf("%d",&num);
	for (i=0; i<n; i++){
		if(a[i]==num){
			location=i+1;
			found_it=1;
		}
	}
	if(found_it==1){
		printf("the location of the element you searched for is: %d",location);

	}
	else
	{
		printf("Error!!! the element you searched for is not listed: ");

	}

}


