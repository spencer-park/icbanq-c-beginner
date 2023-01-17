// 반환 값이 있는 함수의 활용
#include <stdio.h>

int calculate(){
    return 3;
}

int main(){
    // 함수 실행
    int result = calculate();
    printf("결과는 %d\n", result);

    return 0;
}