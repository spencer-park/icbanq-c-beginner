// 02_switch_calc.c 를 함수 사용해서 정의해보자
#include <stdio.h>

int calculate(int n1, int n2, char operator){
    switch (operator){
        case '+':
            return n1 + n2;
        case '-':
            return n1 - n2;
        case '*':
            return n1 * n2;
        case '/':
            return n1 / n2;   
    }
    // return -99999999;  // 없으면 warning: non-void function does not return a value in all control paths
}

int main(){
    // 함수 실행
    int result = calculate(3, 5, 'c');
    printf("결과는 %d\n", result);

    return 0;
}