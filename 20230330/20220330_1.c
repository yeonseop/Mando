// 78530원 -> 10만원
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int money, change, price, c50000, c10000, c5000, c1000, c500, c100, c50, c10;

	printf("물건 값을 입력하시오.: ");
	scanf("%d", &price);

	printf("투입한 금액을 입력하시오.: ");
	scanf("%d", &money);
	change = money - price;

	c50000 = change / 50000;
	change = change % 50000;

	c10000 = change / 10000;
	change = change % 10000;

	c5000 = change / 5000;
	change = change % 5000;

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;

	c100 = change / 100;
	change = change % 100;

	c50 = change / 50;
	change = change % 50;

	c10 = change / 10;
	change = change % 10;

	printf("거스름 돈은\n 오만원권: %d장 \n 만원권: %d장 \n 오천원권: %d장 \n 천원권: %d장 \n 오백원 동전: %d개 \n 백원 동전: %d개 \n 오십원 동전: %d개 \n 십원 동전: %d개 입니다.", c50000, c10000, c5000, c1000, c500, c100, c50, c10);

	pritnf("오만원권: %d장\n", c50000);
	pritnf("만원권: %d장\n", c10000);
	pritnf("오천원권: %d장\n", c5000);
	pritnf("천원권: %d장\n", c1000);
	pritnf("오백원 동전: %d개\n", c500);
	pritnf("백원 동전: %d개\n", c100);
	pritnf("오십원 동전: %d개\n", c50);
	pritnf("십원 동전: %d개\n", c10);
	return 0;
}