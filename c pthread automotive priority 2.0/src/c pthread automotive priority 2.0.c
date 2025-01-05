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
#include <pthread.h>
#include <sched.h>
#include <unistd.h>

void *engineMonitoringTask(void *arg);
void *infointmentTask(void *arg);


int main(void) {

	pthread_t thread1, thread2;
	pthread_attr_t attr1, attr2;
	struct sched_param param1, param2;

	//initialize thread paramters
	pthread_attr_init(&attr1);
	pthread_attr_init(&attr2);

	//Set scheduling policy to FIFO
	pthread_attr_setschedpolicy(&attr1, SCHED_FIFO);
	pthread_attr_setschedpolicy(&attr2, SCHED_FIFO);

	//Set thread priority
	param1.sched_priority=10;
	param2.sched_priority=5;

	pthread_attr_setschedparam(&attr1, &param1);
	pthread_attr_setschedparam(&attr2, &param2);

	//create threads
	pthread_create(&thread1, &attr1, engineMonitoringTask, NULL);
	pthread_create(&thread2, &attr2, infointmentTask, NULL);

	//WAIT FOR THREADDS TO JOIN
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	//Destriy thread attributes
	pthread_attr_destroy(&attr1);
	pthread_attr_destroy(&attr2);

	return 0;

}


void *engineMonitoringTask(void *arg){
	for(int i=0; i<10;i++){
		printf("High-Priority Task: Monitoring Engine Parameters (Iteration %d)\n", i + 1);
		sleep(1);
	}
	pthread_exit(NULL);
}

void *infointmentTask(void *arg){
	for(int i=0; i<10;i++){
		printf("Low-Priority Task: Updating Infotainment Display (Iteration %d)\n", i + 1);
		sleep(1); // Simulate work
	}
	pthread_exit(NULL);
}

