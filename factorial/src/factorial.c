/*
 ============================================================================
 Name        : factorial.c
 Author      : Sony Sunny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=0, n, factorial=1;
	printf("Enter the number");
	scanf("%d", &n);
	if(n==0)
	{
		printf("The factorial of number %d is: %d", n,0);
	}else
	{
		for(i=1;i<=n;i++)
		{
			factorial=factorial*i;
		}
		printf("The factorial of number %d is: %d", n, factorial);
	}
	return EXIT_SUCCESS;
}
