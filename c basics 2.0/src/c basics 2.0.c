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

int main(void) {
//	int int_a;
//	char char_c;
//	float float_f;
//	double double_d;
//	long double long_double;


//	printf("Size of int: %d\n", sizeof(int_a));
//	printf("size of char: %d\n", sizeof(char_c));
//	printf("size of char: %d\n", sizeof(float_f));
//	printf("size of char: %d\n", sizeof(long_double));

/*
	char a[]="Hey its me sony";
	int i,j;
	int length= strlen(a);

	char b[length+1];
	for(i=0;i<length;i++){
		b[i]=a[length-1-i];
	}
	b[i]='\0';

	char *ptr=&b;
	printf("%s", ptr);
	return EXIT_SUCCESS;
*/

	int i,j;
	char a[]="Edmonton";
	int len = strlen(a);

	char b[len+1];

	printf("length: %d\n", len);

	for(i=0;i<len;i++){
		b[i]=a[(len-1)-i];
	}

	b[i]='\0';
	char *ptr = &b;
	printf("%s", ptr);


}

