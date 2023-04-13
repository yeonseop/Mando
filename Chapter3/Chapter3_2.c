/*
02 미국에서는 거리를 표시하는데 마일을 사용한다. 마일을 미터로 환산하는 프로그램을 만들어보자.
사용자로부터 마일단위로 거리를 입력 받아서 변수에 저장한다. 이  변수에 1.609를 곱하여 미터로 변환한다.
미터로 변환된 값을 화면에 출력한다. 실수 값을 사용한다.
*/
#define _CRT_SECURE_NO_WARRING
#include <stdio.h>

int main(void) {
	float meter;
	double mile;

	printf("마일을 입력하시오.: ");
	scanf_s("%lf", &mile);

	meter = mile*1609.0;

	printf("%.1f마일은 %lf미터 입니다.", mile, meter);
	return 0;
}