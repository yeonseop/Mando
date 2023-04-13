#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	unsigned int num;
	printf("10진수: ");
	scanf("%u", &num);
	unsigned int mask = 1 << 7; // mask = 10000000  mask = 128로 해도 상관없음
	printf("2진수: ");
	((num & mask) == 0) ? printf("0") : printf("1"); // 둘이 다르면 0 같으면 1출력 
	mask = mask >> 1; // 오른쪽 비트로 1비트 이동
	((num & mask) == 0) ? printf("0") : printf("1"); 
	mask = mask >> 1; 
	((num & mask) == 0) ? printf("0") : printf("1");
 	mask = mask >> 1; 
	((num & mask) == 0) ? printf("0") : printf("1"); 
	mask = mask >> 1; 
	((num & mask) == 0) ? printf("0") : printf("1"); 
	mask = mask >> 1; 
	((num & mask) == 0) ? printf("0") : printf("1"); 
	mask = mask >> 1; 
	((num & mask) == 0) ? printf("0") : printf("1"); 
	mask = mask >> 1; 
	((num & mask) == 0) ? printf("0") : printf("1"); 
	mask = mask >> 1; 
	printf("\n");

	return 0;
}