/*
05 다항식 3x2 + 7x + 11의 값을 계산하는 프로그램을 작성하라. x의 값은 실수로 사용자에게 입력받는다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	float num, result;

	printf("실수를 입력하세요.: ");
	scanf("%f", &num);

	result = 3 * num * num + 7 * num + 11;

	printf("다항식의 값은 %f", result);

	return 0;
}