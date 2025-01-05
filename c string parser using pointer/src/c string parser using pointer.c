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

void parseString(*str){
	const char *start=str;
	const char *end;


	while(*start){

		//skip the leading spaces
		if(*start==''){
			start++;
		}

		//
		end=start;

	}
}




int main(void) {

	char str;
	const char *input="Hello my name is sony sunny";
	printf("Parsed words:\n");
	parseString(*input);


	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
