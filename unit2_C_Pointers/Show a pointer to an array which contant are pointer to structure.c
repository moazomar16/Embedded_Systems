#include "stdio.h"
#include "string.h"
struct Semployee{
	char *employee_name;
	int employee_id;
};
void main (){
	setvbuf(stdout, NULL, _IONBF,0);
	setvbuf(stderr, NULL, _IONBF,0);
	struct Semployee employee1={"moaz",1001}, employee2={"alex",1002},employee3={"John",1003};
	struct Semployee *arr[]={&employee1,&employee2,&employee3};
	struct Semployee *((*ptr)[3])=&arr;
	printf("EXmployee name : %s\nExmployee id : %d",(**(*ptr+1)).employee_name,(*(*ptr+1))->employee_id);

}


