/*
 * endian_conv.c
 *
 *  Created on: 2017. 1. 8.
 *      Author: LeeJaeseok
 */

#include <stdio.h>
#include <arpa/inet.h>

void printBit(char *p, int shortOrLong, unsigned long num);
int main(int argc, char *argv[]) {
	unsigned short host_port = 0x1234;
	unsigned short net_port;
	unsigned long host_addr = 0x12345678;
	unsigned long net_addr;

	int i;
	char *p;

	net_port = htons(host_port);
	net_addr = htonl(host_addr);

	printf("Host ordered port: %#010x\n", host_port);
	for (i = 0; i < sizeof(host_port); i++) {
		p = (char *) (&host_port) + i;
		printf("host_port(%d)[%p] : %#04x\n", i, p, *p);
	}
	printf("Network ordered port: %#010x\n", net_port);
	printf("Host ordered address: %#010lx\n", host_addr);
	printf("Network ordered address: %#010lx\n", net_addr);
	return 0;
}

void printBit(char *p, int shortOrLong, unsigned long num){
	if(shortOrLong){

	}
}
