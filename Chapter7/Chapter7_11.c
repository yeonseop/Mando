/*
11 1^2 + 2^2 + 3^2 + ... + n^2의 값을 계산하여 출력하여 보자.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, result=0;

	printf("n의 값을 입력하시오.: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		result += i * i;
	}
	printf("계산값은 %d입니다.", result);
	return 0;
}