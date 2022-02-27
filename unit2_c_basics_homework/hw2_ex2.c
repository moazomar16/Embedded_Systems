/*
 * hw2_ex2.c
 *
 *  Created on: Jan 7, 2022
 *      Author: Moaz Omar
 */
#include "stdio.h"
void main (){
	char x;
	printf("Enter An Alphabet:");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);
	switch (x){
	case 'i':
	case 'I':
	{
		printf("%c is an vowel",x);
		break;
	}
	case 'o':
	case 'O':
	{
		printf("%c is an vowel",x);
		break;
	}
	case 'a':
	case 'A':
	{
		printf("%c is an vowel",x);
		break;
	}
	case 'e':
	case 'E':
	{
		printf("%c is an vowel",x);
		break;
	}
	case 'u':
	case 'U':
	{
		printf("%c is an vowel",x);
		break;
	}
	default:
	{
		printf("%c is a consonant",x);
		break;
	}
	}
	/*if(x=='I' ||x=='i' ||x=='O' ||x=='o'||x=='A' ||x=='a'|| x=='E' ||x=='e'||x=='U' ||x=='u'  )
		printf("%c is an vowel",x);
	else
		printf("%c is a consonant",x);*/
}

