/*
05 우리나라에서 많이 사용되는 면적의 단위인 평을 제곱미터로 환산하는 프로그램을 작성하시오.
여깃 1평은 3.3m2이다. 변수들의 자료형은 어떤 것을 선택하는 것이 좋은가?
기호 상수를 이용하여 1평당 제곱미터를 나타내어라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	const double SQMETER_PER_PYEONG = 3.3058;
	int pyeong;
	double square_meter;

	printf("평을 입력하세요.: ");
	scanf("%d", &pyeong);

	square_meter = pyeong * SQMETER_PER_PYEONG;

	printf("%lf 평방미터입니다.", square_meter);
	return 0;
}