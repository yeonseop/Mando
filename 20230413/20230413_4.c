#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;

	for (x = 1; x < 7; x++) {
		for (y = 1; y < 7; y++) {
			if ((x + y) == 6) {
				printf("(%d , %d)\n",x, y);
			}
		}
	}

	return 0;
}