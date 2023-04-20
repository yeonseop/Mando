#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    for (int i = 1; i <= 6; i++) {
        for (int j = i; j <= 6; j++) {
            if (i + j == 6) {
                if (i > j) {
                    continue;
                }
                printf("주사위 2개의 합이 6이 나오는 경우는 (%d, %d)\n", i, j);
            }
        }
    }
    printf("\n");

    for (int i = 1; i <= 6; i++) {
        for (int j = i; j <= 6; j++) {
            for (int k = j; k <= 6; k++) {
                if (i + j + k == 10) {
                    printf("주사위 3개의 합이 10이 나오는 경우는 (%d, %d, %d)\n", i, j, k);
                }
            }
        }
    }
    return 0;
}
