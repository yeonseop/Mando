/*
07 사용자로부터 키를 입력받아서 표준 체중을 계산한 후에 사용자의 체중과 비교하여 저체중인지, 표준인지, 과체중인지를 판단하는 프로그램을 작성하여라.
표준 체중 계산식은 다음을 사용하라. 표준 체중 = (키 - 100) x 0.9
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double height, weight, std_weight;

	printf("체중과 키를 입력하세요:");
	scanf("%lf %lf", &weight, &height);
	std_weight = (height - 100) * 0.9;
	if (weight < std_weight)
		printf("저체중입니다.\n");
	else if (weight > std_weight)
		printf("과체중입니다.\n");
	else
		printf("표준체중입니다.\n");
	return 0;
}