#include "stdio.h"

void main (){

	int m=29;
	int* ab;
	printf("Address of m : %p\n",&m);
	printf("value of m : %d\n",m);
	ab=&m;
	printf("Address of pointer ab : %p\n",ab);
	printf("content of pointer ab : %d\n",*ab);
	m=34;
	printf("Address of pointer ab : %p\n",ab);
	printf("content of pointer ab : %d\n",*ab);
	*ab=7;
	printf("Address of m : %p\n",&m);
	printf("value of m : %d\n",m);


}


