/* 파일명: ex15-07-static.c
static 변수(정적변수)
    함수내부(지역), 함수외부(전역)에서도 사용 가능
    프로그램이 시작될 때 할당되고 프로그램이 끝날때 소멸된다.
*/

#include <stdio.h>

int gNumber = 10;
static int number2 = 0; 

void increaseNumber()
{
    static int number = 0;  // static 전역변수 number 선언

    number++;
    printf("number: %d\n", number);
    printf("number2: %d\n", number2);

}

int main(void) 
{
    increaseNumber();
    increaseNumber();
    increaseNumber();
    increaseNumber();

    return 0;
}