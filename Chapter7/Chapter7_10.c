/*
10 실수의 거듭 제곱값을 계산하는 프로그램을 작성하여 보자.
사용자로부터 하나의 실수 r와 거듭 제곱 횟수를 나타내는 정수 n을 입력받아서 r^n을 구하여 화면에 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double r, result = 1.0;
	int n;

	printf("실수의 값을 입력하시오.: ");
	scanf("%lf", &r);

	printf("거듭제곱횟수를 입력하시오.: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		result = result*r;
	}
	printf("%lf", result);
	return 0;
}