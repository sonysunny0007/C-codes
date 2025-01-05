/*
 ============================================================================
 Name        : Switch_program.c
 Author      : Sony Sunny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	printf("Enter\n 1 for puttu \n 2 for thankus chicken biriyani\n 3 for thankus dance\n 4 for thankus idiyappam");
	scanf("%d", &choice);
	switch (choice){
	case 1:
		printf("Go to arikuzha!!!");
		break;
	case 2:
		printf("Come to canada!!!");
		break;
	case 3:
		printf("Go to madhuramveppu video!!!");
		break;
	case 4:
		printf("Nalla idikittum!!!");
	}
    return EXIT_SUCCESS;
}
