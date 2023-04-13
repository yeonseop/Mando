/*
01 키보드에서 하나의 문자를 읽어서 모음과 자음을 구분하는 프로그램을 작성하여보자. 단 switch문을 사용하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char c;
	printf("문자를 입력하시오:");
	c = getchar();
	switch (c) {
	case 'a':
	case 'i':
	case 'o':
	case 'u':
	case 'e':
		printf("모음입니다.\n");
		break;
	default:
		printf("자음입니다.\n");
	}
	return 0;
}