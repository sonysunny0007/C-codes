/*
 ============================================================================
 Name        : 0.c
 Author      : Sony
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int allocateDM(int size){
	int *arr = (int*)malloc(size*sizeof(int));

	for(int i=1;i<=size;i++){
		arr[i]=i*10;
	}

	for(int i=1;i<=size;i++){
		printf("%d, ", arr[i]);
	}

	free(arr);
}

int main(void) {

	int size=5;

	allocateDM(size);
	return EXIT_SUCCESS;
}
