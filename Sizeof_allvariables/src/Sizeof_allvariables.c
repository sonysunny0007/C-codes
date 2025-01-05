/*
 ============================================================================
 Name        : Sizeof_allvariables.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, *p;
	char ch, *chptr;
	float f;
	double d;
	long double ld;
	printf("Size of an integer: %d\n", sizeof(i));
	printf("Size of an pointer integer: %d\n", sizeof(p));
	printf("Size of an character: %d\n", sizeof(ch));
	printf("Size of an character pointer: %d\n", sizeof(chptr));
	printf("Size of an float: %d\n", sizeof(f));
	printf("Size of an double: %d\n", sizeof(d));
	printf("Size of an long double: %d\n", sizeof(ld));

	return EXIT_SUCCESS;
}
