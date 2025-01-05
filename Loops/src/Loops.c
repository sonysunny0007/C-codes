/*
 ============================================================================
 Name        : Loops.c
 Author      : Sony Sunny
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//int main(void) {
//	int i;
//	for(i=2;i<=100;i=i+2) //initialization, condition, updation
//	printf("The even numbers are:%d\n", i); /* prints !!!Hello World!!! */
//	return EXIT_SUCCESS;
//}


//int main(void) {
//	int i=2,p,q,r,s;
//	p=i++; //2
//	q=++i; //1+3=4
//	r=i--; //4
//	s=--i; //3-1=2
//	printf("The actual number is:%d\n", i); /* prints !!!Hello World!!! */
//	printf("The post increment number is:%d\n", p);
//	printf("The pre increment number is:%d\n", q);
//	printf("The post decrement is:%d\n", r);
//	printf("The pre decrement is:%d\n", s);
//	return EXIT_SUCCESS;
//}

//int main(void) {
//	int i, number, sum=0;
//	printf("Enter the number\n");
//	scanf("%d", &number);
//
//	for(i=0;i<=number;i++) //initialization, condition, updation
//	{
//		sum=sum+i;
//	}
//	printf("The sum is:%d\n", sum); /* prints !!!Hello World!!! */
//	return EXIT_SUCCESS;
//}

int main(void) {
	int i,n=0;
	printf("Enter the number\n");
	scanf("%d", &n);
	for(i=2;i<=n;i++) //initialization, condition, updation
	{
		if(i%2==0)
		printf("The even numbers are:%d\n", i); /* prints !!!Hello World!!! */
	}
		return EXIT_SUCCESS;
}
