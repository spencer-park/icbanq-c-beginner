#include <stdio.h>

// 함수의 선언(상단)
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

// main 함수
int main() {
    int num1 = 10, num2 = 20, result;

    // 함수의 호출
    result = add(num1, num2);
    printf("res : %d add %d is %d\n", num1, num2, result);

    result = sub(num1, num2);
    printf("res : %d sub %d is %d\n", num1, num2, result);

    result = mul(num1, num2);
    printf("res : %d mul %d is %d\n", num1, num2, result);



    return 0;
}

// 함수의 정의(하단)
int add(int a, int b) {
    int res = a + b;
    return res;
}

int sub(int a, int b) {
    int res = a - b;
    return res;
}

int mul(int a, int b) {
    int res = a * b;
    return res;
}