int random(int * arr, int seed) {
	int num, i;

	srand(seed);

	for (i = 0; i < 20; i++) {
		do {
			num = rand() % 20 + 1;
		} while (ifsame(arr, 20, num) == 1);
		arr[i] = num;
	}

	return 0;
}

int ifsame(int * arr, int size, int data) {
	int i, j, flag = 0;

	for (i = 0; i < size; i++) {
		if (data == arr[i]) {
			flag = 1;
		}
	}

	return flag;
}

int lprint(int * arr) {
	int i;

	printf("\n\n\n\n\t\t\t");
	for (i = 1; i <= 8; i++) {
		printf("%4d", arr[i - 1]);
		if (i % 2 == 0) {
			printf("        ");
		}
		if (i % 4 == 0) {
			printf("\n\t\t\t");
		}
	}
	for (i = 9; i <= 20; i++) {
		printf("%4d", arr[i - 1]);
		if (i == 14) {
			printf("\n\t\t\t");
		}
	}
	printf("\n\n\n\n\n\n\n");
}

int gprint(int * arr) {
	int i, j = 0, cnt;

	for (i = 1; i <= 5; i++) {
		printf("\n\n\n\n\t\t\t%dÁ¶ : ", i);
		for (cnt = 0; cnt < 4; cnt++) {
			printf("%4d", arr[j++]);
		}
	}
	printf("\n\n\n\n\n");
}