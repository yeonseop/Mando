#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main()
{
	int x;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}

