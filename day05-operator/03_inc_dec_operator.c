// 증감연산자 ++ 감산 --. 위치에 따라 순서가 바뀐다.
// int, float 둘 다 된다.
#include <stdio.h>

int main(){
    // Case1 ++변수 --변수
    int n1 = 3;
    printf("n1 = %d\n", ++n1);  // n1: 4, 출력: 4
    printf("n1 = %d\n", --n1);  // n1: 3, 출력: 3
    printf("n1 = %d\n", n1);  // n1: 3, 출력: 3

    // Case2 변수++ 변수--
    int n2 = 3;
    printf("n2 = %d\n", n2++);  // n2: 4, 출력: 3
    printf("n2 = %d\n", n2--);  // n2: 3, 출력: 4
    printf("n2 = %d\n", n2);  // n2: 3, 출력: 3

    return 0;
}