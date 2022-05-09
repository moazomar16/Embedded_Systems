#include "stdio.h"
#include "string.h"
void main (){
	setvbuf(stdout, NULL, _IONBF,0);
	setvbuf(stderr, NULL, _IONBF,0);
	char str[15];
	char* Sptr=str;
	int limit,i;
	printf("Input the number of elements to store in the array (max 15) : ");
	scanf("%d",&limit);
	printf("Input %d number of elements in the array \n:",limit);
	for(i=0 ;i<limit;i++){
		printf("element - %d: ",i+1);
		scanf("%d",Sptr);
		Sptr++;
	}
	printf("The elements of array in reverse order are :\n");
	Sptr=&str[limit-1];
	for(i=limit ;i>0;i--){
		printf("element - %d: %d\n",i,*Sptr);
		Sptr--;
	}

}


