/*
12 피보나치 수열에서는 앞의 2개의 원소를 합하여 뒤의 원소를 만든다.
피보나치 수열은 컴퓨터에서도 탐색 문제등에 사용되기도 한다.
피보나치 수열을 생성하여 출력하는 프로그램을 작성하여 보자.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, a = 0, b = 1, c=0;

	printf("몇 번째 항까지 구할까요? ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d, ", a);
		c = a + b;
		a = b;
		b = c;
	}
	return 0;
}