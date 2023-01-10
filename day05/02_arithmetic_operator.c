// 산술 연산자
#include <stdio.h>

int main(){
    // int, float 일 때
    int n1 = 3, result_int;
    float f1 = 2.0, result_f;

    // 정수 + 소수
    result_int = n1 + f1;
    result_f = n1 + f1;
    printf("n1 + f1 = %d\n", result_int);
    printf("n1 + f1 = %f\n", result_f);
    printf("n1 + f1 = %f\n", n1 + f1);  // 표현 범위가 넓은 쪽으로 변환



    return 0;
}