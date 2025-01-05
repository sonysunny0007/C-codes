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
};


struct Node* createNode(int data){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	return newNode;

}


void insertAtBeggining(struct Node** head, int data){
	struct Node* newNode=createNode(data);
	newNode->next=*head;
	*head=newNode;
}


void printList(struct Node* head){
	struct Node* temp= head;
	while(temp!=NULL){
		printf("%d -> ", temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}







int main(void) {

	struct Node* head=NULL;

	insertAtBeggining(&head, 10);
	insertAtBeggining(&head, 20);
	insertAtBeggining(&head, 30);

	printf("Linked list after inserting nodes at the beginning:\n");
	printList(head);
//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */


	printf("head-Next: %d\n", head->next);
	struct Node* temp;
	while(head!=NULL){
		temp=head;
		head=head->next;
		free(temp);
	}


	return EXIT_SUCCESS;
}
