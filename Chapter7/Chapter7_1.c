/*
01 가끔은 일정한 시간 동안 아무 일을 하지 않으면서도 시간을 지연시킬 목적으로 반복문을 사용하기도 한다. 사용자에게서 하나의 수를 입력받아서 변수에 저장한다.
반복문을 사용하여 이 변수의 값을 1씩 감소시키면서 이 변수의 값이 0이 될 때까지 반복한다. 반복이 끝나면 벨소리를 낸다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;

	printf("카운터의 초기값을 입력하시오.: ");
	scanf("%d", &num);

	for (num; num > 0; num--) {
		printf("%d  ", num);
		if (num == 1) {
			printf("\a");
		}
	}
	return 0;
}