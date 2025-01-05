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
#include <stdbool.h>

int readSpeedSensor(){
	return rand() % 7000;
}

int readTempSensor(){
	return rand() /1000;
}

void controlFuelInjection(bool on){
	if(on){
		printf("The vehicle is ON!\n");
	}
	else{
		printf("The vehicle is OFF!\n");
	}
}

typedef struct{
	int speed;
	int temp;
	pthread_mutex_t lock;
}vehicleData;


void* speedSensorThread(void* arg){
	vehicleData *data = (vehicleData *)arg;
	while(1){
		int speed = readSpeedSensor();
		pthread_mutex_lock(&data->lock);
		data->speed=speed;
		pthread_mutex_unlock(&data->lock);
		printf("Speed: %d\n", speed);
		sleep(1);
	}
	return NULL;
}




void* tempSensorThread(void *arg){
	vehicleData *data = (vehicleData *)arg;
	while(1){
		int temp = readTempSensor();
		pthread_mutex_lock(&data->lock);
		data->temp=temp;
		pthread_mutex_unlock(&data->lock);
		printf("Temperature: %d\n", temp);
		sleep(2);
	}
	return NULL;
}

void* fuelinjectorThread(void* arg){
	vehicleData *data = (vehicleData *)arg;
	while(1){
		pthread_mutex_lock(&data->lock);
		bool injectorOn = (data->speed >50)&&(data->temp <120);
		pthread_mutex_unlock(&data->lock);
		controlFuelInjection(injectorOn);
		sleep(1);
	}
	return NULL;
}


int main(void) {
	pthread_t speedThread, tempThread, injectionThread;
	vehicleData data={0,0,PTHREAD_MUTEX_INITIALIZER};

	//CREATE THREADS
	pthread_create(&speedThread, NULL, speedSensorThread, &data);
	pthread_create(&tempThread, NULL, tempSensorThread, &data);
	pthread_create(&injectionThread, NULL, fuelinjectorThread, &data);

	//wait for threads to finish

	pthread_join(speedThread, NULL);
	pthread_join(tempThread, NULL);
	pthread_join(injectionThread, NULL);





//	puts("Macros and contional compilation"); /* prints Macros and contional compilation */
	return EXIT_SUCCESS;
}
