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

int main(void) {

	int a[][3]={{1,2,3},{2,4,5},{4,5}};
	int sum_row,sum_col;

	int i,j;

	for(i=0;i<3;i++){
		sum_row=0;
		sum_col=0;
		for(j=0;j<3;j++){
			sum_row=sum_row+a[i][j];
		//	sum_row2=sum_row2+a[i][j];
		//	sum_row3=sum_row3+a[i][j];
		}
		printf("1st row %d\n", sum_row);
	}
	//printf("1st row %d\n", sum_row1);
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
