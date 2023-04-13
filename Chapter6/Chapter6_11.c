/*
11 사용자로부터 하나의 문자를 입력받아서 문자가 'R'이나 'r'이면 "Rectangle"이라고 출력한다. 
'T'이거나 't'이면 "Traingle", 'C'이거나 'c'이면 "Cricle"이라고 출력하는 프로그램을 작성한다.
그 외의 문자가 들어오면 "Unknown"이라고 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char c;
	printf("문자를 입력하시오: ");
	c = getchar();
	switch (c) {
	case 'C':
	case 'c':
		printf("Circle \n"); break;
	case 'T':
	case 't':
		printf("Triangle \n"); break;
	case 'R':
	case 'r':
		printf("Rectangle \n"); break;
	default: printf("Unknown \n"); break;
	}

	return 0;
}