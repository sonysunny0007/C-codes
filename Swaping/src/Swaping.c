/*
 ============================================================================
 Name        : Swaping.c
 Author      : Sony Sunny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, temp;
	a=50;
	b=70;
//	temp=a;
//	a=b;
//	b=temp;

	a =a+b;
	b =a-b;
	a =a-b;



	printf("a = %d , b = %d", a, b); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
