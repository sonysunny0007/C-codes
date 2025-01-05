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

int stringParser(char *str, int start, int end){
	int i,j=0;
	char b[(end-start)+2];
	for(i=start;i<=end;i++,j++)
		b[j]=str[i];
	b[j]='\0';
	printf("The string is %s\n", b);
}

int main(void) {

	char str[]="Edmonton";
	stringParser(str, 0,4);
	return EXIT_SUCCESS;
}
