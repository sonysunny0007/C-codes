/*
 ============================================================================
 Name        : prime_number.c
 Author      : Sony Sunny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=0, n, flag=0;
	printf("Enter the number");
	scanf("%d", &n);
	if(n==0 || n==1)
	{
		flag=0;
	}
	for(i=0;i<=n;i++)
	{
		if(n%i==0)
			flag++;
	}
	if(flag==2)
		printf("The number %d is a prime number", n);
	else
		printf("The number %d is not a prime number", n);
	return EXIT_SUCCESS;
}
