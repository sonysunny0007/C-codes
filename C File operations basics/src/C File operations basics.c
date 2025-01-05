/*
 ============================================================================
 Name        : C.c
 Author      : Sony
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {

	FILE *file;
	char buffer[500];


	file=fopen("test.txt", "w");
	if(file==NULL){
		perror("Failed to open the file");
	}

	fprintf(file, "Hey its me sony");

	fclose(file);

	file=fopen("test.txt","r");
	if(file==NULL){
		perror("Failed to open the file");
	}

	while((fgets(buffer, sizeof(buffer), file))!=NULL)
		printf("Read data: %s", buffer);

	fclose(file);

//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
