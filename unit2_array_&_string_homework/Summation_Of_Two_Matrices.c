/*
 * Summation_Of_Two_Matrices.c
 *
 *  Created on: Jan 21, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
void main(){
	float a[2][2],b[2][2],sum=0;
	int r,c;
	printf("Enter the elements of the 1st matrix:\n");
	//fflush(stdout); fflush(stdin);
	for (r=0; r<2; r++){
		for(c=0; c<2; c++){
			printf("Enter a[%d][[%d]:",r+1,c+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&a[r][c]);
		}
	}
	printf("Enter the elements of the 2nd matrix:\n");
	fflush(stdout); fflush(stdin);
	for (r=0; r<2; r++){
		for(c=0; c<2; c++){
			printf("Enter b[%d][%d]:",r+1,c+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&b[r][c]);
		}
	}
	printf("Sum of the two matrices:\n");
	for (r=0; r<2; r++){
			for(c=0; c<2; c++){
				sum=a[r][c]+b[r][c];
				printf("%.2f\t",sum);
			}
			printf("\n");
		}

}

