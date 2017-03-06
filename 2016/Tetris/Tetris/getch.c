//#include <stdio.h>
//#include <conio.h>
//
//#define UP 72
//#define DOWN 80
//#define LEFT 75
//#define RIGHT 77
//#define SPACE 32
//#define a 97
//#define d 100
//
//int main() {
//	int ch, ex, i;
//
//	while (1) {
//		ch = getch();
//		if (ch == 224) {
//			ex = getch();
//			switch (ex) {
//			case UP:
//				printf("Extended UP : %4d\n", ex);
//				break;
//			case DOWN:
//				printf("Extended DOWN : %4d\n", ex);
//				break;
//			case LEFT:
//				printf("Extended LEFT : %4d\n", ex);
//				break;
//			case RIGHT:
//				printf("Extended RIGHT : %4d\n", ex);
//				break;
//			default:
//				printf("Extended : %4d\n", ex);
//			}
//		}
//		else {
//			switch (ch) {
//			case SPACE:
//				printf("NOT Extended SPACE : %4d\n", ch);
//				break;
//			case a:
//				printf("NOT Extended a : %4d\n", ch);
//				break;
//			case d:
//				printf("NOT Extended d : %4d\n", ch);
//				break;
//			default:
//				printf("Not Extended : %4d\n", ch);
//			}
//		}
//	}
//	printf("\n\n");
//}