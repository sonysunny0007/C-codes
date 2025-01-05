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


typedef struct{
	char radioName[100];
	int radioID;
	float signalStrength;
}radio;

int main(void) {

/*
	char input[100];
	//char *ptr;
	printf("Enter the string");
	fgets(input, sizeof(input), stdin);

	input[strcspn(input, "\n")]='\0';

	printf("The string is: %s", input);


*/
/*
	//char name[100];

	char input[]="Hello its me";
	char dest[strlen(input)];
	strcpy(dest, input);
	printf("%s\n", dest);
	char *start=input;
	char *end=input + strlen(input)-1;
	char temp;

	while(start<end){
		temp=*start;
		*start=*end;
		*end=temp;

		start++;
		end--;

	}



	printf("%s\n", input);

	puts("!!!Hello World!!!");
*/

	radio *VC1234;
	VC1234=(radio *)malloc(sizeof(radio));

	snprintf(VC1234->radioName, sizeof(VC1234), "VC1234");
	VC1234->radioID=1234;
	VC1234->signalStrength=57.1;



	printf("Radio Name: %s\n", VC1234->radioName);
	printf("Radio ID: %d\n", VC1234->radioID);
	printf("Radio SS: %f\n", VC1234->signalStrength);

	free(VC1234);



	return EXIT_SUCCESS;
}
