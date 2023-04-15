/*
02 1부터 100사이의 모든 3의 배수의 합을 계산하여 출력하는 프로그램을 반복 구조를 사용하여 작성하라.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
	}
	printf("1부터 100사이의 모든 3의 배수의 합은 %d 입니다.",  sum);
	return 0;
}