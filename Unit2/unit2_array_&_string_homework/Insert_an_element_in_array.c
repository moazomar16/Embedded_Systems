/*
 * Insert_an_element_in_array.c
 *
 *  Created on: Jan 21, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
void main(){
	int a[20],i,n,num,location;
	printf("Enter the NO of elements:");
	fflush(stdout); fflush(stdout);
	scanf("%d",&n);
	printf("Enter the elements:");
	fflush(stdout); fflush(stdout);
	for (i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the NO to be inserted:");
	fflush(stdout); fflush(stdout);
	scanf("%d",&num);
	printf("Enter the location:");
	fflush(stdout); fflush(stdout);
	scanf("%d",&location);
	printf("Entered elements after editing:\n");
	for(i=n; i>=location;i--){
		a[i]=a[i-1];
	}
	a[location-1]=num;
	for (i=0; i<=n; i++){
		printf("%d",a[i]);

		}

}

