/*
08 컴퓨터는 막대 그래프를 그리는 데도 사용된다. 사용자로부터 1부터 50사이의 숫자를 입력받아서 숫자만큼의 별표를 출력하는 프로그램을 작성하라.
막대는 가로로 그려지게 된다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int height;

	while (1) {
		printf("막대의 높이(종료: -1): ");
		scanf("%d", &height);

		for (int i = 1; i <= height; i++) {
			printf("*");
		}
		printf("\n");
		if (height == -1)
			break;
	}
	return 0;
}