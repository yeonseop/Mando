/*
09 'a+1', 'a+2','a+3'을 문자 형식(%c)으로 출력하는 프로그램을 작성하시오. 이 프로그램에서 알 수 있는 것은 무엇인가?
*/

#include <stdio.h>

int main(void)
{
	printf("%c %c %c\n", 'a' + 1, 'a' + 2, 'a' + 3);
	return 0;
}