#include <stdio.h>
#include <conio.h>

int main() {
	char keycode = 0;

	while (keycode != '!') {
		keycode = getch();
		printf("Key : %c, KeyCode : %x\n", keycode, keycode);
	}

	return 0;
}