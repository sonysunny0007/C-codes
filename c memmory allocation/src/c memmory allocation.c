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

int main(void) {

	int i,n;
	printf("Enter the numbe of elements");
	scanf("%d", &n);

	int *ptr;
//	ptr=(int *) malloc(n*sizeof(int));
	ptr=(int *) calloc(n, sizeof(int));

	if(ptr==NULL){
		printf("Memmory allocation failed!");
		return 1;
	}

	for(i=0;i<n;i++){
		ptr[i]=i+1;
	}

	printf("The elemets are: ");
	for(i=0;i<n;i++){
		printf("%d", ptr[i]);
	}

	printf("\n");

	free(ptr);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
