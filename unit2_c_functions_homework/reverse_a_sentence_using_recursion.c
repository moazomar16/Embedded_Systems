/*
 * reverse_a_sentence_using_recursion.c
 *
 *  Created on: Feb 18, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
void reverseSentence();
void main() {
    printf("Enter a sentence: ");
    fflush(stdout); fflush(stdin);
    reverseSentence();
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}
