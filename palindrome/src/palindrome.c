/*
 ============================================================================
 Name        : palindrome.c
 Author      : Sony Sunny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n;
	char a[9];
//	int a[9]={'M','A','L','A','Y','A','L','A','M'};
	printf("Enter the characters\n");
	for(i=0;i<=7;i++)
	{
		scanf("%c", &a[i]);
	}
	printf("Scanning completed\n");
	for(i=6;i>=0;i--)
//	for(i=0;i<=8;i++)
	{
		printf("%c", a[i]);
	}
	return EXIT_SUCCESS;
}

