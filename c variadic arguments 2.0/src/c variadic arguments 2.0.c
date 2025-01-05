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
#include <stdarg.h>

int sum(int count, ...){
	int total=0;

	//start processing variadic arguments
	va_list args;
	va_start(args,count);

	for(int i=0;i<count;i++){
		total += va_arg(args, int);
	}

	va_end(args);
	return total;
}

int main(void) {

	printf("The sum: %d", sum(2,1,4));



	return EXIT_SUCCESS;
}
