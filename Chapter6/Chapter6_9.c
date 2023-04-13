/*
09 다음과 같이 정의되는 함수의 함수 값을 계산하여 보자.
사용자로부터 x값을 입력받아서 함수값을 계산하여 화면에 출력한다. x는 실수이다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double x, fx;

	printf("x의 값을 입력하시오:");
	scanf("%lf", &x);
	if (x <= 0)
		fx = x * x * x - 9.0 * x + 2.0;
	else
		fx = 7.0 * x + 2.0;
	printf("f(x)의 값은 %f\n", fx);
	return 0;
}