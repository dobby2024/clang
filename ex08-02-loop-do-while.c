/* 파일명: ex08-02-loop-do-while.c

2. do ~ while 문
    while문과 동일하나, 최소 한번은 실행된다.

*/

#include <stdio.h>

int main(void)
{
    int num = 5;
    do {
        printf("num is %d now\n", num);
        num++;
    } while(num < 3);

    return 0;
}