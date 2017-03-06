/*
 * errnoEx.c
 *
 *  Created on: 2017. 1. 28.
 *      Author: leejaeseok
 */

#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {
	printf("errno : %d\n", errno);
	printf("message : %s\n", strerror(errno));
	perror("message ");
}
