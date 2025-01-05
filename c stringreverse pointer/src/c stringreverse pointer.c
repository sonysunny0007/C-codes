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
#include <string.h>

void reverseString(char *str){
	char *start=str;
	char *end=str + strlen(str)-1;
	char temp;

//swapping the charqacters
while(start<end){
	temp=*start;
	*start=*end;
	*end=temp;

	start++;
	end--;

	}

}




int main(void) {


	char str[100];
	printf("Enter the string: ");
	fgets(str, sizeof(str), stdin);

	str[strcspn(str, "\n")]='\0';

	reverseString(str);

	printf("%s", str);

	puts("------"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
