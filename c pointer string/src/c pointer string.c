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

	char str[100];
	char *ptr=str;

	printf("Enter the string\n");
	scanf("%99s", ptr);

	printf("You entered: %s", ptr);


	while(*ptr!='\0'){
		ptr++;
	}

	*ptr='!';
	*(ptr+1)='\0';

	printf("The modified string is: %s", str);


//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
