// 산술 연산자
#include <stdio.h>

int main(){
    // integer 일 때
    int n1 = 3, n2 = 2, result;

    result = n1 + n2;
    printf("n1 + n2 = %d\n", result);

    result = n1 - n2;
    printf("n1 - n2 = %d\n", result);

    result = n1 * n2;
    printf("n1 * n2 = %d\n", result);

    result = n1 / n2;
    printf("n1 / n2 = %d\n", result);

    result = n1 % n2;
    printf("n1 % n2 = %d\n", result);

    return 0;
}