#include "stdio.h"
struct Sstudent
{
	char name[50];
	int roll;
	float mark;
};
void main (){
	int i;
	struct Sstudent student[3];
	printf("Enter information of students\n" );
	for (i = 0; i < 3; ++i)
	{
		student[i].roll=i+1;
		printf("For roll number %d \n",student[i].roll);
		printf("Enter name: " );
		fflush(stdout); fflush(stdin);
		gets(student[i].name);
		printf("Enter student mark: ");
		fflush(stdout); fflush(stdin);
		scanf("%f",&student[i].mark);
	}
	printf("Dis-playing the information of students \n" );
	for (i = 0; i < 3; ++i)
		printf("\nFor roll number %d \nstudent name: %s \nstudent mark: %.2f",student[i].roll,student[i].name,student[i].mark);	

}