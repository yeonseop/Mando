#include "stdio.h"
int main(void)
{
	int i, sum;
	sum = 0;
	for (i = 1; i <= 30; i++) {
		sum += i * i + 1;
	}

	printf("%d\n", sum);
	return 0;
}
