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


int main(void) {
	struct Node	*head, *temp, *newNode;
	head=NULL;int choice;
	while(choice){
	newNode=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter the data\n");
	scanf("%d",&newNode->data);
	newNode->next=NULL;

	if(head==NULL){
		head=newNode;
	}else{
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}

	printf("Do you want to continue (0,1)\n");
	scanf("%d",&choice);
	temp=head;
	while(temp!=NULL){
		printf("List: %d\n", temp->data);
		temp=temp->next;
	}
	}
	puts("!!!SUCCESS!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
