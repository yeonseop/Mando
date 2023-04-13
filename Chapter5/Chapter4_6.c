/*
06 다음과 같은 수식의 값을 계산하여 화면에 출력하는 프로그램을 작성하시오.
지수표기법을 사용하여 변수들을 초기화한다.
*/

#include <stdio.h>

int main(void) {
	double  value = 3.32e-3 + 9.76e-8;

	printf("%lf", value);
	return 0;
}