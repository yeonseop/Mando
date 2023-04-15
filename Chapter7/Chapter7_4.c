/*
04 반복 루프를 사용하여 다음과 같은 패턴을 출력하는 프로그램을 작성하라.
*/

#include <stdio.h>

int main(void) {
	int j;
	for (int i = 1; i < 8; i++) {
		for (j = 7-i; j > 0; j--) {
			printf(" ");
		}
		for (j = i; j >= 1; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}