/*
06 앞장에서 간단한 정수 계산기를 만들어본 적이 있다. 이 계산기 프로그램에 메뉴를 추가하도록 한다.
다음과 같은 메뉴를 화면에 출력하고 사용자가 메뉴 중에서 하나를 선택할 때까지 반복을 계속한다.
do...while 반목문을 사용하여 사용자가 적절한 선택을 했는지를 검사하도록 하라. 
만약 사용자가 A,S,M,D,Q가 아닌 다른 문자를 입력하면 "연산을 선택하시오:" 메시지를 계속해서 출력한다.
하나의 메뉴가 선택되면 해당되는 연산을 실행하고 다시 메뉴를 선택할 수 있도록 하라.
반복을 종료하는 메뉴인 Q는 break 문을 이용하여 구현하도록 하라.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char menu,x;
	int num1, num2;

	printf("********************\n");
	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Multiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quit\n");
	printf("********************\n");

	do
	{
		printf("연산을 선택하세요: ");
		scanf("%s", &menu); // %c로 받으면 엔터까지 두번 입력으로 쳐져서 프린트문이 두번반복 따라서 문자열로 받아야한다.


		if (menu == 'Q')
			break;

		if (menu == 'A')
		{
			printf("두 수를 공백으로 분리하여 입력하세요:  ");
			scanf("%d %d", &num1, &num2);
			printf("%d\n", num1 + num2);
			continue;
		}
		if (menu == 'S')
		{
			printf("두 수를 공백으로 분리하여 입력하세요: ");
			scanf("%d %d", &num1, &num2);
			printf("%d\n", num1 - num2);
			continue;
		}
		if (menu == 'M')
		{
			printf("두 수를 공백으로 분리하여 입력하세요: ");
			scanf("%d %d", &num1, &num2);
			printf("%d\n", num1 * num2);
			continue;
		}
		if (menu == 'D')
		{
			printf("두 수를 공백으로 분리하여 입력하세요: ");
			scanf("%d %d", &num1, &num2);
			printf("%f\n", (float)num1 / num2);
		}
	} while (1);
	return 0;
}