/*
 ============================================================================
 Name        : structbook.c
 Author      : Sony Sunny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct books
{
	char book_name[20];
	char book_author[20];
	int rack_number;
}book1, book2;

void printbook(struct books book);

int main() {
//	struct books book1;
//	struct books book2;
	printf("Welcome to the library");

	strcpy(book1.book_name, "Time flies");
	strcpy(book1.book_author, "Tiyama");
	book1.rack_number=1;

	strcpy(book2.book_name, "love");
	strcpy(book2.book_author, "Sony");
	book2.rack_number=2;

	printf("\n");
	printbook(book1);
	printf("\n");
	printbook(book2);

	return EXIT_SUCCESS;
}

void printbook(struct books book)
{
	printf("The book name is: %s\n", book.book_name);
	printf("The book author is: %s\n", book.book_author);
	printf("The book rack number is: %d\n", book.rack_number);

}
