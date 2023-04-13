/*
03 int형의 변수 x와y의 값을 서로 교환하는 프로그램을 작성하여 보자.
별도의 변수가 필요하면 정의하여서 사용한다. 변수x와 y는 10, 20의 값으로 초기화하라.
*/
#include <stdio.h>

int main(void) {

	int x=10, y=20, z;

	printf("x= %d y= %d\n", x, y);

	z = x;
	x = y;
	y = z;

	printf("x= %d y= %d\n", x, y);
	return 0;

}