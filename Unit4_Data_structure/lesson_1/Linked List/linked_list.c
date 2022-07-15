/*
 * linked_list.c
 *
 *  Created on: Jul 13, 2022
 *      Author: Moaz Omar
 */

// fill node with data
#include"linked_list.h"
// global pointer to locate the head of the list
struct Node * gPhead= NULL;


void Fill_Node(struct Node * Newdata){
	char temp[50];
	float x;
	printf("\n Enter ID: ");
	gets(temp);
	Newdata->student.ID= atoi(temp);
	printf("\n Enter student name: ");
	gets(Newdata->student.name);
	printf("\n Enter height: ");
	fflush(stdin);
	scanf("%f",&x);
	Newdata->student.height= x;
	fflush(stdin);
}
int Add_Node(){
	struct Node * newNode;
	struct Node * lastNode;
	// list does not contain a record
	if(gPhead==NULL){
		// create new node
		newNode=(struct Node *)malloc(sizeof(struct Node ));
		gPhead=newNode;
		//lastNode= newNode;
	}
	else{
		// list contain A record
		lastNode=gPhead;
		while(lastNode->PNext){
			lastNode=lastNode->PNext;
		}
		// create new node
		newNode=(struct Node *)malloc(sizeof(struct Node ));
		lastNode->PNext=newNode;
	}
	// fill the record
	Fill_Node(newNode);
	// set the next record to null
	newNode->PNext=NULL;
	return 1;

}
int Delete_Node(){
	char temp[50];
	int selected_id;
	printf("\n Enter selected ID: ");
	gets(temp);
	selected_id=atoi(temp);
	if(gPhead){
		struct Node * selectedNode=gPhead;
		struct Node * prevNode= NULL;
		while(selectedNode){
			// compare the record with selected id
			if(selectedNode->student.ID==selected_id){
				// check if the selected id match with the first node in list
				if(prevNode){
					// not the first node in list
					prevNode->PNext=selectedNode->PNext;
				}
				else{
					// the first node in list
					gPhead=selectedNode->PNext;
				}
				// delete the selected node
				free(selectedNode);
				return 1;
			}
			// Increment pointer
			prevNode=selectedNode;
			selectedNode=selectedNode->PNext;
		}

	}
	printf("\n cannot find student id");
	return 0;
}
int View_Nodes(){
	struct Node * selectedNode=gPhead;
	int count=1;
	if(gPhead == NULL)
		printf("\n Empty list");
	else
		while(selectedNode){
			printf("\n Record number %d",count++);
			printf("\n\t student ID:  %d",selectedNode->student.ID);
			printf("\n\t student Name:  %s",selectedNode->student.name);
			printf("\n\t student height:  %.2f",selectedNode->student.height);
			selectedNode=selectedNode->PNext;
		}
	return 0;
}
int DeleteAll_Nodes(){
	struct Node * currentNode=gPhead;
	struct Node * prevNode;
	if(gPhead == NULL)
		printf("\n Empty list");
	else
		while(currentNode){
			prevNode=currentNode;
			currentNode=currentNode->PNext;
			free(prevNode);
		}
	gPhead=NULL;
	return 0;
}
// getting length of node
int Get_Length_Nodes(){
	struct Node * currentNode=gPhead;
	int count;
	// calling recursive func to calculate length
	count=Get_Length_recursive(currentNode);
	if (count>0)
		printf("\n Length of list is %d ",count);
	else
		printf("\n Empty list");


}
// recursive function
int Get_Length_recursive(struct Node * currentNode){
	while(currentNode){
		return 1 + Get_Length_recursive(currentNode->PNext);
	}
}

// get the nth node from the end of list
void Get_nth_Node(int index){
	struct Node * currentNode=gPhead;
	struct Node * prevNode=currentNode;
	int count=0,length;
	// using recursive func to get the length
	length=Get_Length_recursive(currentNode);
	// we have three situations
	// 1st is that length of list is bigger than the index
	if(length>index){
		while(count!=index){
			count++;
			currentNode=currentNode->PNext;
		}
		while(currentNode){
			currentNode=currentNode->PNext;
			prevNode=prevNode->PNext;
			count++;

		}
		print_Node( prevNode, --count);
	}
	//  2nd is that length of list is  equal to the index
	else if (length==index) {
		count=1;
		print_Node( prevNode, count);

	}
	// 3rd is that length of list is less than the index
	else{
		printf("\n node doesn't exist");
		printf("\n printing last possible node");
		count=1;
		print_Node( prevNode, count);
	}
}

// printing a given node
void print_Node(struct Node * selectedNode,int count){
	printf("\n Record number %d",count);
	printf("\n\t student ID:  %d",selectedNode->student.ID);
	printf("\n\t student Name:  %s",selectedNode->student.name);
	printf("\n\t student height:  %.2f",selectedNode->student.height);

}

void Find_middle_Node(){
	struct Node * currentNode=gPhead;
	int count=0,length,selected;
	// using recursive func to get the length
	length=Get_Length_recursive(currentNode);
	// the problem here is to find if the length is even or odd
	// if it is even so the middle will be the second middle ex length = 4 mid=(4/2)+1
	// if it is odd the middle will be mid(int)=length(int)/2 ex mid=5/2=2 +1
	selected=(length/2)+1;
	while(count!=selected){
		currentNode=currentNode->PNext;
		count++;
	}
	print_Node(currentNode, count);

}

void Find_middle_Node_using2ptr(){
	struct Node * fastNode=gPhead;
	struct Node * slowNode=fastNode;
	int count=0,count2=0;

	while(fastNode){
		while(fastNode && count!=2){
			fastNode=fastNode->PNext;
			count++;
		}
		count=0;
		count2++;
		if(fastNode)
			slowNode=slowNode->PNext;
		else if(count2%2==0)
			slowNode=slowNode->PNext;

	}
	print_Node(slowNode, count2);
}


void Detect_Loop(){
	struct Node * fastNode=gPhead;
	struct Node * slowNode=gPhead;
	struct Node * newNode=NULL;
	if (fastNode && slowNode&& gPhead)
	while(fastNode!=slowNode){
			fastNode=fastNode->PNext->PNext;
			slowNode=slowNode->PNext;
		}
	printf("found loop ");
}

void Reverse_list(){
	struct Node * prevNode=gPhead;
	struct Node * currentNode=gPhead;
	struct Node * nextNode=NULL;
	currentNode=currentNode->PNext;
	prevNode->PNext=NULL;
	while(currentNode!=NULL){
		nextNode=currentNode->PNext;
		currentNode->PNext=prevNode;
		prevNode=currentNode;
		currentNode=nextNode;
	}
	gPhead=prevNode;
	View_Nodes();
}
