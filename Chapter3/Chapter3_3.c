/*
03 사용자로부터 삼각형의 높이와 밑변을 받아와서 넓이를 계산하여 출력하는 프로그램을 작성하라.
단 모든 데이터는 실수로 입력되며 출력도 모두 실수형으로 하여야 한다.
*/
#define _CRT_SECURE_NO_WARRING
#include <stdio.h>

int main(void) {
	
	int width, height;
	float area;

	printf("삼각형의 밑변: ");
	scanf("%d", &width);

	printf("삼각형의 높이: ");
	scanf("%d", &height);

	area = width * height * 0.5;

	printf("삼각형의 넓이: %f", area);

	return 0;
}