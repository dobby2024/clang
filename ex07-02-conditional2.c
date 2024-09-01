/* 파일명: ex07-02-conditional2.c
2. switch 문
*/

#include <stdio.h>

int main(void)
{

    int num = 1;
    switch(num)
    {
        case 0:
            printf("0 입니다. \n");
            break;
        case 1:
            printf("1 입니다. \n");
            break;
        case 2:
            printf("2 입니다. \n");
            break;
        case 3:
            printf("3 입니다. \n");
            break;
        default:
            printf("0 ~ 3 이 아닙니다. \n");
            break;

    }



    char btn = 'a';
    switch(btn)
    {
        case 'w':
            printf("앞으로 이동\n");
            break;
        case 'a':
            printf("좌측으로 이동\n");
            break;
        case 's':
            printf("뒤로 이동\n");
            break;
        case 'd':
            printf("우측으로 이동\n");
            break;
        default:
            printf("Hold!\n");
            break;
    }


    /*
        1 : 환불신청
        2 : 환불검토
        3 : 환불불가
        4 : 환불완료
    */

    int returnCode = 2;

    switch (returnCode)
    {
    case 1:
    case 2:
    case 3:
        printf("환불 불가 상태 코드 : %d\n", returnCode);
        break;
    default:
        break;
    }


    if (returnCode == 1 || returnCode == 2 || returnCode == 3) {
        printf("환불 불가 상태 코드 : %d\n", returnCode);
    }









    


    return 0;
}