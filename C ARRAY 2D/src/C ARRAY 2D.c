/*
 ============================================================================
 Name        : C.c
 Author      : Sony
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>




int main(void) {

	int a[][3]={{1,2,3},{2,4,5},{2,4}};
	int sum;

	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d", a[i][j]);
		}
		printf("\n");
	}

	a[2][2]=6;

	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				sum=sum+a[i][j];
			}
		}
	printf("%d", sum);
//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
