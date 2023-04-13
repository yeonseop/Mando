#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, z;
	printf("정수 두 개를 입력하시오.: ");
	scanf("%d %d", &x, &y);
	int i = 1;
	for (i = 1; i < x + 1; i++) {
		if ((x % i == 0) && (y % i == 0)) {
			z = i;
		}
	}
	printf("%d", z);
	return 0;
}