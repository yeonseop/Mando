#include "stdio.h"

int main(void) {
	int i, sum, j;
	sum = 0;
	for (i = 10; i <= 30; i++)
		for (j = 0; j <= 5; j++) {

			sum += i + j;
			printf("%d \n", sum);
			return 0;
		}
}
