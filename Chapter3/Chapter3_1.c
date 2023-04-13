/*
01 사용자로부터 세 개의 실수를 입력받은 후, 합계와 평균값을 계산하여 화면에 출력하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2, num3;
	float sum, avg;

	printf("실수를 입력하시오.: ");
	scanf("%d", &num1);

	printf("실수를 입력하시오.: ");
	scanf("%d", &num2);

	printf("실수를 입력하시오.: ");
	scanf("%d", &num3);

	sum = num1 + num2 + num3;
	avg = sum / 3.0;

	printf("합은 %f 이고 평균은 %f 입니다.", sum, avg);
	return 0;
}