/*
13 서로 다른 n개에서 r개를 선택하여 나열하는 방법의 수를 순열(permutation)이라 하고, nPr로 표시한다.
순열은 다음고 같은 식을 이용하여 구할 수 있다. 순열을 구하는 프로그램을 작성하라.
n과 r은 사용자가 입력할 수 있도록 하라. nPr = n(n-1)(n-2)...(n-r+1)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n , r  , result = 1;

	printf("n의 값: ");
	scanf("%d", &n);

	printf("r의 값: ");
	scanf("%d", &r);

	for (int i = 1; i <= (n - r - 1); i++) {
		result *= i;
	}
	printf("순열의 값은 %d입니다.", result);
	return 0;
}