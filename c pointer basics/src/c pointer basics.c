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
#include <string.h>

void printArray(char *ptr){
	printf("%s", ptr);
}


int main(void) {

	char a[10]="Helloooo";
	char b[5];
	char *ptr=a;

	printArray(ptr);



//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
