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


//define node sstructure

struct Node{
	int data;
	struct Node* next;
};

//Function to create new node

struct Node* createNode(int data){
	struct Node* newNode= (struct Node *)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	return newNode;
}


//Function to create new node at biginning

void insertatBeginning(struct Node** head, int data){
	struct Node* newNode=createNode(data);
	newNode->next=*head;
	*head= newNode;
}



void insertatEnd(struct Node** head, int data){
	struct Node* newNode= createNode(data); //new node is created
	if(*head==NULL){  //if the node is empty new node becomes the head of the node
		*head=newNode;
		return;
	}
	struct Node* temp=*head; //a tempeorory pointer is initalied to point to the head of the list
	while(temp->next!=NULL){ //while loop runs the list until it reache the last node
		temp=temp->next;
	}

	temp->next=newNode; //next field of the last node is set tho the new node, effectively inserting it at the end og the lis

}


void deleteNode(struct Node** head, int data){
	struct Node* temp =createNode(data);
	struct Node* prev =createNode(data);


	//if the node to be deleted is the head node
		if(temp!= NULL && temp->data==data){
			*head=temp->next;
			free(temp);
			return;

	//Search for the node to be deleted
		while(temp!=NULL && temp->data!=data){
			prev=temp;
			temp=temp->next;
		}

	//if the node was not found
		if(temp==NULL)return;


		prev->next=temp->next;
		free(temp);
		}

}

void printList(struct Node* head){
	struct Node* temp=head;
	while(temp!=NULL){
		printf("%d ->", temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}




int main(void) {


	struct Node* head= NULL;

	//insert elements

	insertatBeginning(&head,1);
	insertatBeginning(&head,2);


	printf("Linkedlist: ");
	printList(head);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
