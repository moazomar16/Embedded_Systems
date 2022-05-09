#include "stdio.h"
struct Sstudent
{
	char name[50];
	int roll;
	float mark;
};
void main (){
	struct Sstudent x;
	printf("Enter student name: ");
	gets(x.name);
	printf("Enter Roll Number: ");
	scanf("%d",&x.roll);
	printf("Enter student mark: ");
	scanf("%f",&x.mark);
	printf("student name: %s\n",x.name);
	printf("Roll: %d\n",x.roll);	
	printf("student mark: %.2f",x.mark);
		

	}