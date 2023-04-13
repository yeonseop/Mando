#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main(void) {
	srand((unsigned)time(NULL));
	int answer = rand() % 100;
	int guess, tries=0;
	printf("%d", answer);
	do {
		printf("정답을 추측하여보시오.: ");
		scanf("%d", &guess);
		tries++;
		
		if (guess > answer)
			printf("제시한 정수가 높습니다.\n");
		if (guess < answer)
			printf("제시한 정수가 낮습니다.\n");
	} while (guess != answer);

	printf("축하합니다. 시도횟수 = %d \n", tries);
	return 0;
}