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

typedef struct{
	char name[50];
	int age;
	float grade;
}student;

void printStructureInfo(student *studentptr){
	printf("Name: %s\n", studentptr->name);
	printf("Age: %d\n", studentptr->age);
	printf("Grade: %f\n", studentptr->grade);
}


int main(void) {
	char iname[100];
	char *input=iname;
	printf("Enter the name");
	fgets(input, sizeof(iname), stdin);

	printf(":\:: %s\n", input);
	//removing the newline
	while(*input!='\0'){             //removing the newline as we used fgets for reading the string
			if(*input=='\n'){
				*input='\0';
				break;
			}
			input++;
		}

	printf(":: %s\n", iname);
	student *studentptr;
	studentptr=(student *)malloc(sizeof(student));

	if(studentptr==NULL){
		printf("Memmory allocation falied");
		return 1;
	}

	snprintf(studentptr->name, sizeof(studentptr), iname);
	studentptr->age=27;
	studentptr->grade=1.5;

	printStructureInfo(studentptr);

	free(studentptr);
//	snprintf(studentptr->name, )
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
