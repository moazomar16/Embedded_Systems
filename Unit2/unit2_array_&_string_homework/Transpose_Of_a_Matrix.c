/*
 * Transpose_Of_a_Matrix.c
 *
 *  Created on: Jan 21, 2022
 *      Author: Moaz Omar
 */

#include "stdio.h"
void main(){
	int a[10][10],b[10][10],r,c,i,j;
	printf("Enter the size of the matrix (rxc):\n");
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&r,&c);
	printf("Enter the element of the matrix:\n");
	for(i=0; i<r;i++){
		for(j=0; j<c; j++){
			printf("enter element a%d%d",i+1,j+1);
			fflush(stdout); fflush(stdin);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix:\n");
	for(i=0; i<r;i++){
		for(j=0; j<c; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<r;i++){
		for(j=0; j<c; j++){
			b[j][i]=a[i][j];
		}
	}
	printf("the transpose of the matrix:\n");
	for(i=0; i<c;i++){
		for(j=0; j<r; j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}

