#include<stdio.h>



int main() {

	int n;

	printf("정수를 입력하시오: ");

	scanf_s("%d", &n);

	do {

		printf("%d", n % 10);

		n = n / 10;

	} while (n > 0);



}
