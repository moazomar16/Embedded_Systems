#include "stdio.h"

void main (){

	char alpha[27];
	char* p=alpha;
	int i;
	for(i=0;i<26;i++){
		*p='A'+i;
		p++;
	}
	p=alpha;
	printf("The Alphabets are : \n");
	for(i=0;i<26;i++){
		printf(" %c ",*p);
		p++;
	}


}


