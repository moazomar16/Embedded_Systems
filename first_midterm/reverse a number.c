/*
 * 112.c
 *
 *  Created on: Mar 10, 2022
 *      Author: Moaz Omar
 */


#include "stdio.h"
void reverseNumber();
void main() {
    printf("Enter a Number: ");
    fflush(stdout); fflush(stdin);
    reverseNumber();
}

void reverseNumber() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
    	reverseNumber();
        printf("%c", c);
    }
}

