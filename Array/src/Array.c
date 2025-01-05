/*
 ============================================================================
 Name        : Array.c
 Author      : Sony Sunny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, n;
	int sum=0;
	int a[100];
	printf("Enter the limit\n");
	scanf("%d", &n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum is: %d", sum);
	return EXIT_SUCCESS;
}
