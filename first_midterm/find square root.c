/*
 * 11.c
 *
 *  Created on: Mar 11, 2022
 *      Author: Moaz Omar
 */

#include "stdio.h"
#include "math.h"
double squareRoot(double num);
void main(){
	double num;
	printf("enter a number");
	fflush(stdout); fflush(stdin);
	scanf("%lf",&num);
	printf("the square root of %.0lf is %.2lf",num,squareRoot(num));
}

double squareRoot(double num){
	double result;
	result=sqrt(num);
	return result;
}
*************
double squareRoot(double num){
	return pow(2, 0.5 * log2(num));
}
***************-another way-*********************
// C program for the above approach
#include <stdio.h>
#include <stdlib.h>
 
// Function to find the square-root of N
float findSQRT(int number)
{
    int start = 0, end = number;
    int mid;
 
    // To store the answer
    float ans;
 
    // To find integral part of square
    // root of number
    while (start <= end) {
 
        // Find mid
        mid = (start + end) / 2;
 
        // If number is perfect square
        // then break
        if (mid * mid == number) {
            ans = mid;
            break;
        }
 
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < number) {
          //first start value should be added to answer
            ans=start;
          //then start should be changed
            start = mid + 1;
        }
 
        // Decrement end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1;
        }
    }
 
    // To find the fractional part
    // of square root upto 5 decimal
    float increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
 
        // Loop terminates,
        // when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
    return ans;
}
 
// Driver Code
int main()
{
 
    // Given number
    int N = 12;
 
    // Function call
    printf("%f ", findSQRT(N));
    return 0;
}