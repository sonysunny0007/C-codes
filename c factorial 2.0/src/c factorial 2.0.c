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

int main(void) {
	int fact=1, i,n=5;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("Factorial of %d is: %d",n,fact);
	return EXIT_SUCCESS;
}
