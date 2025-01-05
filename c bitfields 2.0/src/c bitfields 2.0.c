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

typedef struct{
	uint8_t TAK;
	uint8_t CAL;
}sysConfigBits;

typedef union{
	sysConfigBits bits;
	uint8_t value;
}sysConfigReg;


volatile sysConfigReg ConfigReg = {0};

int main(void) {

	ConfigReg.bits.TAK=1;

	return EXIT_SUCCESS;
}
