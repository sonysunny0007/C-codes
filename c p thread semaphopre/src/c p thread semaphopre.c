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
#include <semaphore.h>
#include <unistd.h>

sem_t dataReady; //semaphore decalaration
int sensorData=0;

void* sensorTask(void* arg){
	while(1){
		sensorData = rand()%1000;
		printf("Sensor Task: New data produced: %d\n", sensorData);

		//signal the data is ready
		sem_post(&dataReady); //Increment the semaphore

		sleep(1);

	}
}

void* displayTask(void *arg){
	while(1){

		//wait for the sensor data ready
		sem_wait(&dataReady); //decrement the semaphore,  blocks if 0

		// Read and process the sensor data
		 printf("Display Task: Data consumed: %d\n", sensorData);


		 // Simulate delay for data processing
		         sleep(1);


	}
}





int main(void) {
	pthread_t sensorThread, displayThread;

	// Initialize the semaphore to 0, so the display task waits for data
	sem_init(&dataReady,0,0);

	pthread_create(&sensorThread, NULL, sensorTask, NULL);
	pthread_create(&displayThread, NULL, displayTask, NULL);

	pthread_join(sensorThread, NULL);x
	pthread_join(displayThread, NULL);





	puts("Macros and contional compilation"); /* prints Macros and contional compilation */
	return EXIT_SUCCESS;
}
