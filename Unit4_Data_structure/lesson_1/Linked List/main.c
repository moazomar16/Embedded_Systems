/*
 * main.c
 *
 *  Created on: Jul 13, 2022
 *      Author: Moaz Omar
 */

#include "linked_list.h"

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int option,index;
	char temp[5];
	while(1){
		printf("\n #############################################");
		printf("\n\t\t Chose one of the following options ");
		printf("\n");
		printf("\n 1: Add Student");
		printf("\n 2: Delete Student");
		printf("\n 3: View Students");
		printf("\n 4: DeleteAll ");
		printf("\n 5: Get length ");
		printf("\n 6: Get the nth node from the end ");
		printf("\n 7: Get the middle node  ");
		printf("\n 8: Detect loop  ");
		printf("\n 9: Reverse list  ");
		printf("\n Enter Option Number: ");
		gets(temp);
		printf("\n #############################################");
		option=atoi(temp);
		switch(option){
		case 1:
			Add_Node();
			break;
		case 2 :
			Delete_Node();
			break;
		case 3:
			View_Nodes();
			break;
		case 4:
			DeleteAll_Nodes();
			break;
		case 5:
			Get_Length_Nodes();
			break;
		case 6:
			printf("\nEnter the required node number");
			gets(temp);
			Get_nth_Node(atoi(temp));
			break;
		case 7:
			Find_middle_Node_using2ptr();
			break;
		case 8:
			Detect_Loop();
			break;
		case 9:
			Reverse_list();
			break;

		default:
			printf("\n\t Error!!! Wrong number");
		}

	}
}
