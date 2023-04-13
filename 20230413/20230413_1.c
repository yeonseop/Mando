#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x;
	printf("값을 입력하시오.: ");
	scanf("%d", &x);
	int i = 1;
	for (i = 1; i < x+1; i++) {
		if (x % i == 0) {
			printf("%d \n", i);
		}
	}
	return 0;
}