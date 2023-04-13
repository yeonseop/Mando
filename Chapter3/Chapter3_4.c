/*
04 섭씨 온도와 화씨 온도는 다음과 같은 수식을 만족한다. 사용자로부터 화씨 온도를 받아서 섭씨온도로 환산하여 출력하는 프로그램을 작성하라.
온도는 실수형으로 처리한다. C = (5 / 9) * (F - 32)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int f;
	double c;

	printf("화씨값을 입력하시오.: ");
	scanf("%d", &f);

	c = (5.0 / 9.0) * (f - 32.0);

	printf("섭씨값은 %lf도 입니다.", c);

	return 0;

}