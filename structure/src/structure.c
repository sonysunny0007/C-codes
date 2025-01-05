/*
 ============================================================================
 Name        : structure.c
 Author      : Sony Sunny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	int age, num;
	char name[10];
}stud1, stud2;

int main(void) {

	strcpy(stud1.name, "Tiya");
	stud1.age=30;
	stud1.num=1;

	strcpy(stud2.name, "Sony");
	stud2.age=31;
	stud2.num=2;
	printf("The student %s roll number %d age is %d\n", stud1.name, stud1.num, stud1.age);
	printf("The student %s roll number %d age is %d\n", stud2.name, stud2.num, stud2.age);
//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
