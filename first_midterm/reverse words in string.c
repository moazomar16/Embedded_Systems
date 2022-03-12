/*
 * 112.c
 *
 *  Created on: Mar 10, 2022
 *      Author: Moaz Omar
 */

#include "stdio.h"
#include "string.h"
void ReverseWord(char str[],int limit,char spaves[],int x);
void main(){
	char str[100],spaces[10];
	int i,limit,x=0;
	printf("Enter a String ");
	fflush(stdout); fflush(stdin);
	gets(str);
	limit=strlen(str)-1;
	for(i=0;i<limit;i++){
		if(str[i]==' '){
			spaces[x]=i;
			x++;
		}
	}
	ReverseWord(str,limit,spaces,x);
}
void ReverseWord(char str[],int limit,char spaces[],int x){
	int s,i,j=0,a=1;
	char rev[100];
	s=limit;
	while(x>=0){
		for(i=spaces[x-1]+a;i<=limit;i++){
			rev[j]=str[i];
			j++;
		}
		//rev[j]=' ';
		limit=spaces[x-1];
		x--;
		a=0;
		if(x==0)
			break;
	}
	for(i=0;i<spaces[0];i++){
		rev[j]=str[i];
		j++;
	}

	rev[s+1]=0;
	printf("%s",rev);
}
