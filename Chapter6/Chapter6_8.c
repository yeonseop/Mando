/*
08 놀이 공원의 자유이용권의 가격을 계산하는 프로그램을 작성하여 보자.
입장료는 다음과 같은 조건으로 결정된다. 현재 시간과 사용자의 나이를 입력받아서 지불하여야 하는 요금을 화면에 출력한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int time, age, fee;

    printf("현재 시간과 나이를 입력하시오(시간, 나이): ");

    scanf("%d %d", &time, &age);

    if (time < 17) {

        if (age <= 12 && age >= 65) fee = 25000;

        else  fee = 34000;
    }
    else fee = 10000;

    printf("요금은 %d입니다. \n", fee);

    return 0;
}