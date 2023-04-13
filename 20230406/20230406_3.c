#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, result;
	char op;

	printf("숫자 2개와 수식을 입력하시오. (예: 5+2):  ");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else
		printf("올바른 수식이 아닙니다.");

	printf("%d %c %d = %d", x, op, y, result);
	return 0;
}