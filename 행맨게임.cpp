#include <stdio.h>
#include <string.h>
int main(void) {
	char solution[100] = "meet at midnight";
	char answer[100] = "___ __ ________";
	char ch;
	int i;

	while (1) {
		printf("\n���ڿ��� �Է��Ͻÿ�: %s \n", answer);
		printf("���ڸ� �����Ͻÿ�:");
		ch = getchar();

		for(i = 0; solution[i] != NULL; i++) {
		
			if (solution[i] == ch)
				answer[i] = ch;
		}
		if (strcmp(solution, answer) == 0)break;
	}
	return 0;
}