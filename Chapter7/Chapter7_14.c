/*
14 사용자가 입력한 특정한 정수의자리수를 반대로 출력하는 프로그램을 작성하라.
예를 들어서 사용자가 정수 1206을 입력하였다면 6021이 출력되어야한다. do...while문을 사용하여 보라.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, div;

	printf("정수를 입력하시오.: ");
	scanf("%d", &num);

	do {
		div = num % 10;
		num /= 10;
		printf("%d", div);
	} while (num != 0);
		return 0;
}