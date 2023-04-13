/*
10 (x,y) 좌표를 입력받아서 좌표가 속하는 사분면을 화면에 출력하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int x, y;

	printf("좌표(x y): ");
	scanf("%d %d", &x, &y);		//사용자로부터 좌표를 입력받고
	if (x > 0 && y > 0) {		//x>0 임과 동시에 y>0 이라면 1사분면
		printf("1사분면\n");
	}
	if (x < 0 && y > 0) {		//x<0임과 동시에 y>0 이라면 2사분면 
		printf("2사분면\n");
	}
	if (x < 0 && y < 0) {		//x<0임과 동시에 y<0이라면 3사분면
		printf("3사분면\n");
	}
	if (x > 0 && y < 0) {		//x<0임과 동시에 y<0이라면 4사분면
		printf("4사분면\n");
	}
	return 0;
}