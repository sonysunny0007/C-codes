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
#include "ff.h"

FATFS fs;
FIL fil;
FRESULT res;
UINT bw, br;

void file_operations_example(){
	//Mount the file

	res=f_mount(&fs, "",1);
	if(res!=FR_OK){
		printf("Failed to mount the file");
		return;
	}

	//open a file for writing (create if it doesnot exists)

	res=fopen(&fil, "test.txt", FA_WRITE | FA_CREATE_ALWAYS);
	if(res==FR_OK){
		unsigned char* text="Hey its me sony";
		res=f_write(&fil, text, strlen(text), &bw);
		if(res==FR_OK && bw == strlen(text)){
			printf("Data written successfully");
		}else{
			printf("Failed to write the data\n");
		}
		fclose(&fil);
	}
	printf("Failed to open the file\n");

	//Open the file for reading

	res=fopen(&fil, "text.txt", FA_READ);
	if(res==FR_OK){

		char buffer[64];
		res=f_read(&fil,buffer, sizeof(buffer)-1, &br);
		if(res==FR_OK && br>0){
		buffer[br]='\0';
		printf("Read data: %s", buffer);
	}else{
		printf("Failed to open the file\n");
	}

		//close the file
	fclose(&fil);
	}else{
		printf("Failed to open the file\n");
	}


	//Unmount the file
	f_mount(NULL, "", 1);

}


int main(void) {

	file_operations_example();
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
