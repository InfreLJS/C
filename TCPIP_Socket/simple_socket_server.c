/*
 * simple_socket_server.c
 *
 *  Created on: 2017. 1. 10.
 *      Author: LeeJaeseok
 */

#include <arpa/inet.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PACKETLEN 1024
#define nPort 3600

pthread_attr_t attr;
struct sockaddr_in serv_addr, clnt_addr;

void error_handling(char *message) {
	fputs(message, stderr);
	fputs('\n', stderr);
	exit(1);
}

void *proccessCalc(void *sock) {
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
	int str_len;
	char buf[MAX_PACKETLEN];

	while (1) {
		str_len = read(*((int *) sock), buf, sizeof(buf) - 1);
		if (str_len == -1) {
			error_handling("Read Error!");
		}
		if (!(strcmp(buf, "q!"))) {
			return 0;
		}

		printf("Message from [%s] : %s\n", inet_ntoa(clnt_addr.sin_addr), buf);
	}
}

void *sendMessage(void *sock) {
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
	char buf[MAX_PACKETLEN];

	while (1) {
		scanf("%s", buf);
		write(*((int *) sock), buf, strlen(buf));
		printf("Send Message to [%s] : %s\n", inet_ntoa(clnt_addr.sin_addr),
				buf);
	}
}

int main() {
	pthread_t p[2];
	int status;
	pthread_attr_init(&attr);

	int serv_sock, clnt_sock;
	socklen_t clnt_addr_size;

	serv_sock = socket(PF_INET, SOCK_STREAM, 0);
	if (serv_sock == -1) {
		error_handling("Socket Create Error!");
	}

	memset(&serv_addr, 0, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serv_addr.sin_port = htons(nPort);

	printf("Wait for Client...\n");

	if (bind(serv_sock, (struct sockaddr*) &serv_addr, sizeof(serv_addr))
			== -1) {
		return -2;
	}

	if (listen(serv_sock, 5) == -1) {
		return -3;
	}

	while (1) {

		clnt_addr_size = sizeof(clnt_addr);
		clnt_sock = accept(serv_sock, (struct sockaddr*) &clnt_addr,
				&clnt_addr_size);
		if (clnt_sock == -1) {
			return -4;
		}

		printf("[%s] Client Connected.\n", inet_ntoa(clnt_addr.sin_addr));

		if (pthread_create(&p[0], NULL, sendMessage, (void *) &clnt_sock)) {
			error_handling("Thread Create Error!");
		}

		if (pthread_create(&p[1], NULL, proccessCalc, (void *) &clnt_sock)) {
			error_handling("Thread Create Error!");
		}

		pthread_join(p[1], (void **) &status);
	}

	close(clnt_sock);
	close(serv_sock);
	return 0;
}
