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
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>



int main(void) {
	int sockfd;
	struct sockaddr_in server_addr;

	//create socket
	sockfd=socket(AF_INET, SOCK_STREAM, 0);
	if(sockfd== -1){
		printf("Could not create socket\n");
		return 1;
	}

	printf("Socket created!\n");


	//setup server address

	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(8080);
	server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");


	//connect to the server

	if(connect(sockfd, (struct sockaffr*) & server_addr, sizeof(server_addr))<0){
		printf("Connection failed\n");
		return 1;
	}

	printf("Connected to sever\n");

	//send a message to the server
	char *message = "Hello, server";
	if(send(sockfd, message, strlen(message),0 )<0){
		 printf("Message send failed\n");
		 return 1;
	}
	printf("Message sent\n");

	//receiving response from the server
	char buffer[1024]={0};
	if(recv(sockfd, buffer, strlen(buffer),0 )<0){
		printf("Receive failed\n");
		return 1;
	}
	printf("Server:%s\n", buffer);


	//close socket
	close(sockfd);



	puts("Macros and contional compilation"); /* prints Macros and contional compilation */
	return EXIT_SUCCESS;
}
