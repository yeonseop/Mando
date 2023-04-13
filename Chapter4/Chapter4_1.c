/*
01 사용자로부토 하나의 실수를 입력바아서 소수점 표기 방법과 지수 표기 방법으로 공시에 출력하는 프로그램을 작성하라.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	float num;

	printf("실수를 입력하시오.: ");
	scanf("%f", &num);

	printf("실수형식으로는 %f입니다.\n", num);
	printf("지수형식으로는 %e입니다.", num);
	return 0;
}