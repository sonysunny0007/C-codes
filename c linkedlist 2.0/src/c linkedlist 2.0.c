/*
 ============================================================================
 Name        : c.c
 Author      : Sony
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

struct Node{
	int data;
	struct Node *next;
};


int printList(struct Node *head){
	struct Node *temp = head;
	while(temp!=NULL){
		printf("%d->", temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
	return 0;

}

struct Node *createList(int numNodes, ...){
	if(numNodes<=0){
		printf("Invalid number of nodes\n");
		return NULL;
	}

	struct Node *head=NULL, *temp=NULL;

	//start processing variadic arguments
	va_list args;
	va_start(args, numNodes);

	for(int i=0;i<numNodes;i++){
		//Allocate memory for the newNode
		struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
		if(newNode==NULL){
			perror("Memory allocation failed\n");
			exit(EXIT_FAILURE);
		}

	//Get the data from the variadic arguments
		newNode->data=va_arg(args,int);
		newNode->next=NULL;

		if(head==NULL){
			head=newNode;
		}else{
			temp->next=newNode;
		}
		temp=newNode;
	}

	va_end(args);
	return head;
}

int insertAtHead(struct Node **head, int newData){
	//Allocate memory for newNode
	struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
	//Assign data to newNode
	newNode->data=newData;
	//Make the newNode point to the current head
	newNode->next=*head;
	//Update the head to the newNode
	*head=newNode;

	return 1;
}


int insertAtTail(struct Node **head, int newData){
	//Allocate memory to the newNode
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

	//Assign data to the newNode
	newNode->data=newData;
	newNode->next=NULL;

	//if the list is empty, make the newNode the head
	if(*head==NULL){
		*head=newNode;
		return 0;
	}

	// Traverse to the last node
	struct Node *temp = *head;
	while(temp->next!=NULL){
		temp=temp->next;
	}

	// Link the last node to the new node
	temp->next=newNode;
	return 1;
}

int insertAtPosition(struct Node **head, int position, int newData){
	//Allocate memmory for the newNode
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

	//Assign data to the newNode
	newNode->data=newData;

	//If the position is 1 make the newNode the head
	if(position==1){
		newNode->next=*head;
		*head=newNode;
	}

	//traverse to the position
	struct Node *temp = *head;
	for(int i=1; i<position-1 && temp!=NULL; i++){
		temp=temp->next;
	}

	//if the position is beyond the current list
	if(temp==NULL){
		printf("Position is out of bond");
		free(newNode);
	}

	//Insert the node
	newNode->next=temp->next;
	temp->next=newNode;
	return 1;

}


int main(void) {

//	struct Node *head;
//	struct Node *second;
//	struct Node *third;
//
//	head = (struct Node*)malloc(sizeof(struct Node));
//	second = (struct Node*)malloc(sizeof(struct Node));
//	third = (struct Node*)malloc(sizeof(struct Node));
//
//
//	head->data=1;
//	head->next=second;
//
//	second->data=2;
//	second->next=third;
//
//	third->data=3;
//	third->next=NULL;

	struct Node *head=createList(7,4,2,3,1,6,8,100); //Number of nodes, followed by data
//	insertAtHead(&head, 10);
//	insertAtHead(&head, 20);
//	insertAtTail(&head, 30);
//	insertAtPosition(&head,2, 22);
//	insertAtPosition(&head,5, 25);

	printList(head);


	return 0;
}
