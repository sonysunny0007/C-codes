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

	struct Node *head, *newNode, *temp;
	head=NULL; int choice;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter the data");
	scanf("%d",&newNode->data);
	newNode->next=NULL;

	if(head==NULL){
		head=newNode;
	}else{
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}

	}


	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
