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
	fgets(ptr, sizeof(str), stdin);

	while(*ptr!='\0'){             //removing the newline as we used fgets for reading the string
		if(*ptr=='\n'){
			*ptr='\0';
			break;
		}
		ptr++;
	}

	printf("The entered stri ng is: %s\n", str);

	while(*ptr!='\0'){
		ptr++;
	}
	*ptr='!';
	*(ptr+1)='\0';

	printf("The modified string is: %s\n", str);






//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
