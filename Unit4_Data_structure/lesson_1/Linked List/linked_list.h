/*
 * linked_list.h
 *
 *  Created on: Jul 13, 2022
 *      Author: Moaz Omar
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include "stdio.h"
#include "stdint.h"
#include "string.h"
#include "conio.h"
#define NULL ((void *)0)

// Described data in payload
struct Sdata{
	int ID;
	float height;
	char name[40];

};
// Node single linked list
struct Node{
	struct Sdata student;
	struct Node* PNext;
};

//// global pointer to locate the head of the list
//struct Node * gPhead= NULL;

// APIs
void Fill_Node(struct Node * Newdata);
int Add_Node();
int Delete_Node();
int View_Nodes();
int DeleteAll_Nodes();
int Get_Length_Nodes();
int Get_Length(struct Node * currentNode);
void Get_nth_Node(int index);
void print_Node(struct Node * selectedNode,int count);
void Find_middle_Node();
void Find_middle_Node_using2ptr();
void Detect_Loop();
void Reverse_list();



#endif /* LINKED_LIST_H_ */
