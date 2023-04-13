/*
04 컴퓨터와 가위, 바위, 보 게임을 하는 프로그램을 작성하라. 컴퓨터는 사용자에게 알리지 않고 가위, 바위, 보 중에서 임의로 하나를 선택한다.
사용자는 프로그램의 입력 안내 메세지에 따라서, 3개 중에서 하나를 선택하게 된다. 사용자의 선택이 끝나면 컴퓨터는 누가 무엇을 선택하였고 누가 이겼는지, 비겼는지를 알려준다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int select;
    srand((unsigned)time(NULL));
    int pc_select = rand() % 3 + 1;


    printf("선택하시오 ( 1 : 가위   2 : 바위   3 : 보  ) ");
    scanf("%d", &select);

    if (select >= 1 && select <= 3) 
    {
        switch (pc_select)
        {
        case 1:
            printf("컴퓨터의 선택 : 가위\n");
            break;
        case 2:
            printf("컴퓨터의 선택 : 바위\n");
            break;
        case 3:
            printf("컴퓨터의 선택 : 보\n");
            break;
        }

        switch (select)
        {
        case 1:
            printf("사용자의 선택 : 가위\n");
            break;
        case 2:
            printf("사용자의 선택 : 바위\n");
            break;
        case 3:
            printf("사용자의 선택 : 보\n");
            break;
        }

        if (select == pc_select)
        {
            printf("비겼음");
        }
        else if ((select == 1 && pc_select == 2) || (select == 2 && pc_select == 3) || (select == 3 && pc_select == 1))
        {
            printf("컴퓨터가 이겼음");
        }
        else
        {
            printf("사용자가 이겼음");
        }
    }
    else {
        printf("1~3사이의 숫자를 입력해주세요.");
    }

    return 0;
}
