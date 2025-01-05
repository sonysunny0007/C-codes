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
#include <pthread.h>
#include <unistd.h>

void *monitorEngineSpeed(void* arg){
	while(1){
	int engineSpeed=rand() % 7000;
	printf("Engine speed is: %d\n", engineSpeed);
	sleep(1);
	}
	return NULL;

}

void *monitorFuel(void* arg){
	while(1){
	int fuel=rand() % 7000;
	printf("Fuel is: %d\n", fuel);
	sleep(2);
	}
	return NULL;
}


int main(void) {

	pthread_t thread1, thread2;

	if(pthread_create(&thread1, NULL, monitorEngineSpeed, NULL)){
		fprintf(stderr, "Error creating thread1\n");
		return 1;
	}

	if(pthread_create(&thread2, NULL, monitorFuel, NULL)){
		fprintf(stderr, "Error craeting thread2\n");
		return 1;
	}


	if(pthread_join(thread1, NULL)){
		fprintf(stderr, "Error joining thread1\n");
		return 2;
	}

	if(pthread_join(thread2, NULL)){
			fprintf(stderr, "Error joining thread2\n");
			return 2;
	}


	//puts("Macros and contional compilation"); /* prints Macros and contional compilation */
	return EXIT_SUCCESS;
}
