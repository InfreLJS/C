/*
 * threadEx.c
 *
 *  Created on: 2017. 1. 10.
 *      Author: LeeJaeseok
 */

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>

pthread_attr_t attr;

void *t_run1() {
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
	while (1) {
		printf("Thread1 : hello\n");
		sleep(1);
	}
}

void *t_run2() {
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
	char str[20];
	while (1) {
		scanf("%s", str);
		printf("Thread2 : %s\n", str);
	}
}

int main() {
	pthread_t p[2];
	int status[2];
	pthread_attr_init(&attr);
	if (pthread_create(&p[0], NULL, t_run1, NULL)) {
		printf("Thread Create Error!\n");
		exit(1);
	}
	if (pthread_create(&p[1], NULL, t_run2, NULL)) {
		printf("Thread Create Error!\n");
		exit(1);
	}
	pthread_join(p[0], (void **) &status[0]);
	pthread_join(p[1], (void **) &status[1]);

	return 0;
}

