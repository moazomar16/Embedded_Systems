#include "stdio.h"
#include "string.h"
void main (){
	setvbuf(stdout, NULL, _IONBF,0);
	setvbuf(stderr, NULL, _IONBF,0);
	char str[100];
	char* Sptr=str;
	char* Sptr1=str;

	printf("Input a string....\n");
	gets(str);
	Sptr=Sptr+(strlen(str)-1);
	for( ;Sptr>=Sptr1;Sptr--){
		printf("%c",*Sptr);
	}


}


