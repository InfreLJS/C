/*
 * httpWebServerEx.c
 *
 *  Created on: 2017. 1. 28.
 *      Author: leejaeseok
 */

#include <stdio.h>
#include <string.h>

#ifndef __linux__
#include <winsock2.h>
#include <windows.h>
#define perror(msg) winperror(msg)
void winperror(char *msg);

#else
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#endif
