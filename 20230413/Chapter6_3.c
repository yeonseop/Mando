/*
03 사용자로부터 3개의 정수를 읽어 들인후에 if-else 문을 사용하여 가장 작은 값을 결정하는 프로그램을 작성하라.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, z, min;

	printf("3개의 정수를 입력하시오.: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y) {
		min = y;
	}
	else if(x<y){
		min = x;
	}
	if (min < z) {
		printf("제일 작은 정수는 %d입니다.", min);
	}
	else if (min > z) {
		min = z;
		printf("제일 작은 정수는 %d입니다.", min);
	}
	return 0;
}