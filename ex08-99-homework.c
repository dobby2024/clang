/* ex08-99-homework.c


*******
*******
*******
*******
*******
*******
*******


1번 분석하기 
*
**
***
****
*****
******
*******

2번
   *
  **
 ***
****

3번
   *
  ***
 *****
*******

4번             i      j
   *            0
  ***           1
 *****          2
*******         3
 *****          4
  ***           5
   *            6
 

               i    j       j 조건식
   *           0    
  ***          1    
 *****         2    
*******        3    
 *****         4    6       i + j >= 10
  ***          5    5 6     i + j >= 10
   *           6    4 5 6   i + j >= 10


*/

#include <stdio.h>

int main(void) 
{

    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 7; j++) {

            if(j < 3 - i) {
                printf(" ");
            } else if(j > 3 + i){
                printf(" ");
            } else if(j < i - 3) {
                printf(" ");
            } else if(i + j >= 10) {
                printf(" ");
            } else {
                printf("*");
            }
            
        }
        printf("\n");
    }

    printf("\n");

    
    printf("   ☆\n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 7; j++) {

            if(j < 3 - i) {
                printf(" ");
            } else if(j > 3 + i){
                printf(" ");
            } else {
                printf("*");
            }
            
        }
        printf("\n");
        
    }
    printf("  | | Merry Christmas~*");

    return 0;
}