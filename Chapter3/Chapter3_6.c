/*
06 달의 중력은 지구의 약 17%라고 한다. 자신의 몸무게를 입력받아서 달에서의 몸무게를 계산하는 프로그램을 작성하여보라. 실수형으로 계산한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int weight_on_earth;
	float weight_on_moon;

	printf("몸무게를 입력하세요(단위: kg): ");
	scanf("%d", &weight_on_earth);

	weight_on_moon = weight_on_earth * 0.17;

	printf("달에서의 몸무게는 %f kg 입니다.",weight_on_moon);

	return 0;
}