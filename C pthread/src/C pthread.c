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
#include <pthread.h>


void *threadFunc(void *arg){
	printf("Hello from thread!\n");
	return NULL;
}




int main(void) {
	pthread_t thread;
	pthread_create(&thread, NULL, threadFunc, NULL);  //&thread : pointer to the thread_t variable, thread attributes, function to be executed, argument to be passed to the thread function
	pthread_join(thread, NULL);
	printf("Hello from main!");

	//puts("Macros and contional compilation"); /* prints Macros and contional compilation */
	return EXIT_SUCCESS;
}
