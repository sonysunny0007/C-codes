/*
 ============================================================================
 Name        : Mathematics.c
 Author      : Sony Sunny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, choice, result;
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    printf("Enter 1 for addition, 2 for substraction, 3 for multipication, 4 for division\n");
    scanf("%d", &choice);
    if(choice == 1)
    	result = num1 + num2;
    else if(choice == 2)
    	result = num1 - num2;
    else if(choice == 3)
    	result = num1 * num2;
    else if(choice == 4)
    	result = num1 / num2;
    else
    	printf("my THANKAMI IS A fool!!!");

    printf("The result is: %d", result);
    	return EXIT_SUCCESS;
}
