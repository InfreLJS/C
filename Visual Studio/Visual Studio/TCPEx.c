#include <stdio.h>
#include <string.h>

#ifndef __linux__
#include <WinSock2.h>
#include <Windows.h>
#else
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#endif

#define PORT 1234

int main() {
	int sock, client_sock;
	struct sockaddr_in addr, client_addr;
	char buffer[1024];
	int len, addr_len, recv_len;

#ifndef __linux__
	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);
#endif

	if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
		perror("socket");
		return 1;
	}

	memset(&addr, 0x00, sizeof(addr));
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = htonl(INADDR_ANY);
	addr.sin_port = htons(PORT);

	if (bind(sock, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
		perror("bind");
		return 1;
	}

	if (listen(sock, 5) < 0) {
		perror("listen");
		return 1;
	}

	addr_len = sizeof(client_addr);

	printf("waiting for client...\n");

	while ((client_sock = accept(sock, (struct sockaddr *)&client_addr, &addr_len)) > 0) {
		printf("client ip : %s\n", inet_ntoa(client_addr.sin_addr));
	}
}