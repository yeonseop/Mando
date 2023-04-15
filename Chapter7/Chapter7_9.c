/*
09 (1+2+3+...+n)가 10000을 넘지 않으면서 가장 큰 값과 그 때의 n의 값을 구하라.
*/

#include <stdio.h>

int main(void) {
	int sum = 0;
	for (int i = 1; ; i++) {
		sum += i;
		if (sum >= 10000) {
			printf("1부터 %d까지의 합이 %d 입니다.", i - 1, sum-i);
			break;
		}
	}
	return 0;
}