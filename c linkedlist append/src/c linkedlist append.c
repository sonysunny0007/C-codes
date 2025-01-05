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

typedef struct Node{
	int data;
	struct Node* next;
}Node;


struct Node* createNode(int data){
	struct Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->data=data;
	newNode->next=NULL;
	return newNode;
}


void appendNode(struct Node** head, int data){
	struct Node * newNode=createNode(data);
	if(*head==NULL){
		*head=newNode;
		return;
	}
	struct Node* temp= *head;
	while(temp->next!=NULL){
		temp=temp->next;
	}

	temp->next=newNode;
}

void printList(struct Node* head){
	struct Node* temp=head;
	while(temp!=NULL){
		printf("LIST: %d\n", temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}

int main(void) {

	struct Node* head=NULL;

	appendNode(&head,1);
	appendNode(&head,2);
	appendNode(&head,3);
	appendNode(&head,4);

	printList(head);


	struct Node* temp;
	while(head!=NULL){
		temp=head;
		head=head->next;
		free(temp);
	}

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
