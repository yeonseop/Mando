/*
06 사용자로부터 몇 월인지를 정수로 입력받아서 Jan와 같은 영어단어로 출력하는 프로그램을 작성하라.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int month;
	
	printf("월 번호를 입력하시오.: ");
	scanf("%d", &month);

	switch (month)
	{
	case 1:
		printf("Jan");
		break;
	case 2:
		printf("Feb");
		break;
	case 3:
		printf("Mar");
		break;
	case 4:
		printf("Apr");
		break;
	case 5:
		printf("May");
		break;
	case 6:
		printf("Jun");
		break;
	case 7:
		printf("Jul");
		break;
	case 8:
		printf("Aug");
		break;
	case 9:
		printf("Sep");
		break;
	case 10:
		printf("Oct");
		break;
	case 11:
		printf("Nov");
	case 12:
		printf("Dec");
		break;
	}
	return 0;
}