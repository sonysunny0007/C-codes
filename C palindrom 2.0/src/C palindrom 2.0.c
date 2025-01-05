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


int isPalindrome(char *str){
	int start=0;
	int end =strlen(str)-1;

	while(start<end){
		if(str[start]!=str[end]){
			return 0;
		}
		start++;
		end --;
	}
	return 1;
}


int main(void) {

	char str[]="malayalam";

	if(isPalindrome(str)){
		printf("The string is palindrome");
	}else{
		printf("The string is not palindrome");

	}


	return EXIT_SUCCESS;
}
