/*
05 중첩 반복문을 사용하여서 다음과 같이 출력하는 프로그램을 작성하여 보자.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, i, j;

	printf("정수를 입력하시오.: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}