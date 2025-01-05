/*
 ============================================================================
 Name        : c.c
 Author      : Sony
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


	void func(int *p){
		*p=100;
	}

int main(void) {

/*	int bookShelfnumber=10;
//	int *libcard=&bookShelfnumber;
//	int value=*libcard;


//	int value = &bookShelfnumber; //error
//	int value=0x16da93278; //error
	int *value = (int *) 0x16da93278;



	printf("Address of value is 0x16da93278: %d", *value);
//	printf("%p\n", &bookShelfnumber);
//	printf("%d\n", value);
//	printf("%d\n", libcard);

*/

/*
	int a=10;
	int *b=&a;

	int c=*b;

	c=20;
	printf("%d\n", c);

*/
/*
	int ar[10]={1,2,3,4,5};
	int *ptr=ar;
	ptr++;

	printf("%d\t", *ptr);

*/
/*
	int x=50;
	func(&x);
	printf("%d\n", x);
*/
/*
	int arr[5]={1,2,3,4,5};
	int *ptr=arr+3;
	printf("%d\n", *ptr);
*/
/*
	char arr[]={"Hello World"};
	char *ptr=arr;
	ptr+=6;
	printf("%s\n", ptr);
*/

/*
	int ar[10]={1,2,3,4,5,6,7,8,9,10};
	int *ptr=ar;
	*ptr=+6;
	printf("%d\n", *ptr);
*/
/*
	char arr[]={"abcdefghijk"};
	char *ptr=arr;
	printf("%s\n", ptr+6);
*/
/*
	char arr[]={'a','b','b','c','d'};
	char *ptr=arr;
	ptr+=2;
	printf("%c", *ptr);

*/
/*
	char ar[4]={'a','b','c','d'};
	char *ptr=ar;
//	*ptr+=3;   //this access the value and then add 2 to the asci value of 'a' ie, 97+3=100 'd'
	ptr+=3;    // this increments the pointer from a[0] to a[3]
//	for(int i=0;i<4;i++)
	printf("%c\n", *ptr);
*/

/*
	char *arr[]={"hellooooo morning", "hi evening", "heellooo"};
	char *ptr=arr[0];
	ptr+=1;
	printf("%c\n", *ptr);


// output: e;


	char *a={"helloo morning"};
	a+=10;
	printf("%s\n", a);

*/

	int a[]={1,2,3,4,5};
	int *p=a;
	int *q=&a[2];
	int *d;
	d=q-2;



//	p=p+2;  //p+2*sizeof(int);

	printf("q-p %d", (q-p)); //(1008-1000)/4=2
	printf("q-p %d", (p-q)); //(1000-1008)/4=-2
	printf("%d\t", *q);
	q=q-2; //q - 2*sizeof(int)
	printf("%d\t", *q);

//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
