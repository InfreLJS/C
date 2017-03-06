/*
 * socket_calc_server.c
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

#define nPort 3601
#define MAX_CLIENT 10

pthread_attr_t attr;
int clnt_sock_count = 0;

typedef struct {
	int num1, num2;
	char op;
	double result;
	int error;
}__attribute__((packed)) calcSet;

typedef struct {
	int sock;
	char *ip;
} ipSock;

void error_handling(char *message) {
	fputs(message, stderr);
	fputs("\n", stderr);
	exit(1);
}

void *proccessCalc(void *is) {
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
	int str_len;
	calcSet set;
	ipSock lis = *((ipSock *) is);

	while (1) {
		str_len = read(lis.sock, (void *) &set, sizeof(set));
		if (str_len == -1) {
			error_handling("Read Error!");
		}

		if (set.op == '!') {
			printf("Exit!\n");
			close(((ipSock *) is)->sock);
			clnt_sock_count--;
			return 0;
		}
		printf("Message from (%d)[%s] : num1 = %d, num2 = %d, op = %c\n",
				lis.sock, lis.ip, set.num1, set.num2, set.op);

		set.error = 1;
		switch (set.op) {
		case '+':
			set.result = set.num1 + set.num2;
			set.error = 0;
			break;
		case '-':
			set.result = set.num1 - set.num2;
			set.error = 0;
			break;
		case '*':
			set.result = set.num1 * set.num2;
			set.error = 0;
			break;
		case '/':
			if (set.num2 == 0) {
				set.error = 1;
				break;
			}
			set.result = (double) set.num1 / set.num2;
			set.error = 0;
			break;
		}

		write(lis.sock, (void *) &set, sizeof(set));
		printf(
				"Send to (%d)[%s] : num1 = %d, num2 = %d, op = %c, result = %.2lf, error = %d\n",
				lis.sock, lis.ip, set.num1, set.num2, set.op, set.result,
				set.error);
	}
}

void *acceptSock(void *serv_sock) {
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
	pthread_t p[MAX_CLIENT];

	int clnt_sock[MAX_CLIENT];
	socklen_t clnt_addr_size[MAX_CLIENT];
	struct sockaddr_in clnt_addr[MAX_CLIENT];
	ipSock is[MAX_CLIENT];

	while (1) {
		if (listen(*((int *) serv_sock), 5) == -1) {
			error_handling("listen error");
		}
		while (clnt_sock_count >= 10) {
			printf(
					"Exceeded number of Client (%d) : 10 seconds to recheck...\n",
					MAX_CLIENT);
			sleep(10);
		}
		clnt_addr_size[clnt_sock_count] = sizeof(clnt_addr[clnt_sock_count]);
		clnt_sock[clnt_sock_count] = accept(*((int *) serv_sock),
				(struct sockaddr*) &clnt_addr[clnt_sock_count],
				&clnt_addr_size[clnt_sock_count]);
		if (clnt_sock[clnt_sock_count] == -1) {
			error_handling("accept error");
		}

		printf("(%d)[%s] Client Connected.\n", clnt_sock[clnt_sock_count],
				inet_ntoa(clnt_addr[clnt_sock_count].sin_addr));

		is[clnt_sock_count].sock = clnt_sock[clnt_sock_count];
		is[clnt_sock_count].ip = inet_ntoa(clnt_addr[clnt_sock_count].sin_addr);
		if (pthread_create(&p[clnt_sock_count], NULL, proccessCalc,
				(void *) &is[clnt_sock_count])) {
			error_handling("Thread Create Error!");
		}
		clnt_sock_count++;
	}
}

int main() {
	pthread_t p;
	pthread_attr_init(&attr);

	struct sockaddr_in serv_addr;
	int serv_sock;
	int status;

	serv_sock = socket(PF_INET, SOCK_STREAM, 0);
	if (serv_sock == -1) {
		error_handling("Socket Create Error!");
	}

	memset(&serv_addr, 0, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serv_addr.sin_port = htons(nPort);

	printf("TCP Calculator\n");
	printf("Wait for Client...\n");

	if (bind(serv_sock, (struct sockaddr*) &serv_addr, sizeof(serv_addr))
			== -1) {
		return -2;
	}

	if (pthread_create(&p, NULL, acceptSock, (void *) &serv_sock)) {
		error_handling("Thread Create Error!");
	}

	pthread_join(p, (void *) &status);

	close(serv_sock);
	return 0;
}
