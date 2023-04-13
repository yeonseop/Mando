/*
07 물리학에서 운동에너지는 E = mv2/2.0으로 계산된다. 사용자로부터 질량(m)과 속도(v)를 받아서 운동에너지(E)를 계산하는 프로그램을 작성하여 보자.
모든 변수는 double형을 사용하라.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double mass, velocity, Energy;

	printf("질량(kg): ");
	scanf("%lf", &mass);

	printf("속도(m/s): ");
	scanf("%lf", &velocity);

	Energy = (mass * velocity * velocity) / 2.0;

	printf("운동에너지(J): %lf", Energy);
	return 0;
}