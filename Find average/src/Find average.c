/*
 ============================================================================
 Name        : Find.c
 Author      : Sony Sunny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	int a = 10, b = 20, c =30;
//	float avg;
//	avg = (a+b+c)/3;

	float num1, num2, num3;
	float avarege;
	printf("Enter the three numbers\n");
	scanf("%f %f %f", &num1, &num2, &num3);
    avarege = (num1 + num2 +num3)/ 3;
	printf("The average of these numbers is: %f", avarege); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
