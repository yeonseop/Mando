#include<stdio.h>

int main() {

	int x = 0;

	for (int i = 2; i <= 100; i++) {

		for (int j = 1; j < i; j++) {

			if (i % j == 0)

				x++;
		}

		if (x == 1) 
			printf("%3d", i);

		x = 0;

	}



}

