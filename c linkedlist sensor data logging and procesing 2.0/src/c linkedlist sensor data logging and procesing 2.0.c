#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct sensorData{
	int sensorID;
	float value;
	time_t timestamp;
	struct sensorData *next;
};

struct sensorData* createSensorNode(int sensorID, float value){
	struct sensorData *newNode = (struct sensorData*)malloc(sizeof(struct sensorData));
	if(newNode==NULL){
		printf("Memory allocation failed\n");
		exit(1);
	}
	newNode->sensorID=sensorID;
	newNode->timestamp=time(NULL);
	newNode->value=value;
	newNode->next=NULL;
	return newNode;
}

struct sensorData* addSensorData(struct sensorData *head, int sensorID, float value){
	struct sensorData *newNode = createSensorNode(sensorID, value);
	if (head == NULL) {
	        return newNode; // If the list is empty, the new node becomes the head
	}

	struct sensorData *current=head;
	while(current->next!=NULL){
		current=current->next;
	}
	current->next=newNode;
	return head;
}

void compileSensorData(struct sensorData *data){
	printf("Processing sensor data: \n");
	printf("Sensor ID: %d, Value: %f, timestamp: %s", data->sensorID, data->value, ctime(&data->timestamp));
}

void processSensorData(struct sensorData* head){
	struct sensorData *current=head;
	while(current!=NULL){
		compileSensorData(current);
		current=current->next;
	}
}

void freeSensorDataList(struct sensorData *head){
	struct sensorData* current=head;
	while(current!=NULL){
		struct sensorData* temp=current;
		current=current->next;
		free(temp);
	}
}


int main(void) {

	struct sensorData *head=NULL;

	head=addSensorData(head, 1, 22.55);
	head=addSensorData(head, 2, 456.55);
	head=addSensorData(head, 3, 103.55);

	processSensorData(head);

	freeSensorDataList(head);
	return 0;

}
