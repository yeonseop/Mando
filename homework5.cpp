#include<stdio.h>



int main() {

	int n;

	printf("������ �Է��Ͻÿ�: ");

	scanf_s("%d", &n);

	do {

		printf("%d", n % 10);

		n = n / 10;

	} while (n > 0);



}
