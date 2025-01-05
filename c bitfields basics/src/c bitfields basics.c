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


typedef struct{
	unsigned int reg1;
	unsigned int reg2;
}register1;


typedef struct{
	unsigned int reg1:2;//1
	unsigned int reg2:2;//1
	unsigned int reg3:4;//1
}register2;






int main(void) {

	register2 reg={0};

	reg.reg1=2;
	reg.reg2=1;
	reg.reg3=8;

	unsigned int *allbits=(unsigned int *)&reg;
	printf("All bits: %ld\n", *allbits);
	printf("%ld\n", sizeof(register2));
	printf("%d\n", reg.reg1);
	return EXIT_SUCCESS;
}
