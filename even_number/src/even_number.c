/*
 ============================================================================
 Name        : even_number.c
 Author      : Sony Sunny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, n, flag;
	printf("Enter the number");
	scanf("%d", &n);
	if(n%2==0){
		printf("The number is an even number");
	}
	else
	{
		printf("The number is not an even number");
	}
	return EXIT_SUCCESS;
}
