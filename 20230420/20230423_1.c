#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, i, op;
    float answer;

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        x = rand() % 10;
        y = rand() % 10;
        op = rand() % 4;
        
        switch (op) {
        case 0: printf("%d + %d = ", x, y);
            scanf("%f", &answer);
            if (x + y == answer) {
                printf("맞았습니다.\n");
                break;
            }
            else {
                printf("틀렸습니다.\n");
                break;
            }
        case 1: printf("%d - %d = ", x, y);
            scanf("%f", &answer);
            if (x - y == answer) {
                printf("맞았습니다.\n");
                break;
            }
            else {
                printf("틀렸습니다.\n");
                break;
            }
        case 2: printf("%d * %d = ", x, y);
            scanf("%f", &answer);
            if (x * y == answer) {
                printf("맞았습니다.\n");
                break;
            }
            else {
                printf("틀렸습니다.\n");
                break;
            }
        case 3: printf("%d / %d = ", x, y);
            float a = x;
            float b = y;
            scanf("%f", &answer);
            if (a / b == answer) {
                printf("맞았습니다.\n");
                break;
            }
            else {
                printf("틀렸습니다.\n");
                break;
            }

        }
    }
}