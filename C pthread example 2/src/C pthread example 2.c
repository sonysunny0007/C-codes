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
#include <unistd.h>

void *print_message_function(void *ptr){
	char *message=(char *)ptr;
	printf("%s\n", message);
	return NULL;
}

int main(void) {
	pthread_t thread1, thread2;
	const char *message1="Thread 1";
	const char *message2="Thread 2";


	if(pthread_create(&thread1, NULL, print_message_function, (void *)message1)){
		fprintf(stderr, "Error creating thread1\n");
		return 1;
	}

	if(pthread_create(&thread2, NULL, print_message_function, (void *)message2)){
		fprintf(stderr, "Error creating thread2\n");
		return 1;
	}

	if(pthread_join(thread1, NULL)){
		fprintf(stderr, "Error joining thread1");
		return 2;
	}

	if(pthread_join(thread2, NULL)){
		fprintf(stderr,"Error joining thread2");
		return 2;
	}

	fprintf(stderr,"Threads have finished execution\n");
	return 0;
	//puts("Macros and contional compilation"); /* prints Macros and contional compilation */
	return EXIT_SUCCESS;
}
