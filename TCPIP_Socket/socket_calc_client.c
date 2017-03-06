/*
 * socket_calc_client.c
 *
 *  Created on: 2017. 1. 10.
 *      Author: LeeJaeseok
 */

#include <arpa/inet.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define nPort 3601

pthread_attr_t attr;
struct sockaddr_in serv_addr;

typedef struct {
	int num1, num2;
	char op;
	double result;
	int error;
}__attribute__((packed)) calcSet;

void error_handling(char *message) {
	fputs(message, stderr);
	fputs("\n", stderr);
	exit(1);
}

void proccessCalc(void *sock) {
	int str_len;
	calcSet set;

	while (1) {
		scanf("%d %d %c", &set.num1, &set.num2, &set.op);
		while (getchar() != '\n') {
		}

		write(*((int *) sock), (void *) &set, sizeof(set));
		if (set.op == '!') {
			printf("Exit!\n");
			return;
		}
		printf("Send to [%s] : num1 = %d, num2 = %d, op = %c\n",
				inet_ntoa(serv_addr.sin_addr), set.num1, set.num2, set.op);

		str_len = read(*((int *) sock), (void *) &set, sizeof(set));
		if (str_len == -1) {
			error_handling("Read Error!");
		}
		if (set.error) {
			printf("Message from [%s] : Error!\n",
					inet_ntoa(serv_addr.sin_addr));
		} else {
			printf("Message from [%s] : result = %.2lf\n",
					inet_ntoa(serv_addr.sin_addr), set.result);
		}
	}
}

int main() {
	int serv_sock;

	serv_sock = socket(PF_INET, SOCK_STREAM, 0);
	if (serv_sock == -1) {
		error_handling("Socket Create Error!");
	}

	memset(&serv_addr, 0, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	serv_addr.sin_port = htons(nPort);

	if (connect(serv_sock, (struct sockaddr*) &serv_addr, sizeof(serv_addr))
			== -1) {
		error_handling("Connect Error!");
	}
	printf("[%s] Success to Connect Server\n", inet_ntoa(serv_addr.sin_addr));

	proccessCalc(&serv_sock);
	close(serv_sock);

	return 0;
}
