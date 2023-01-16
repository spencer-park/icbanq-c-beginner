#include <stdio.h>

int main(){
    double n1, n2;
    char operator;

    // 이건 되고
    // printf("Enter two number : ");
    // scanf("%lf %lf", &n1, &n2);
    // printf("Enter operator : ");
    // scanf("%c", &operator);

    // 이건 안됨
    // printf("Enter two number : ");
    // scanf("%lf %lf", &n1, &n2);
    // printf("Enter operator : "); // 엔터가 들어감
    // scanf("%c", &operator);

    // sol1
    printf("Enter two number : ");
    scanf("%lf %lf", &n1, &n2);
    getchar();  // 표준 입력 스트림(stdin)에서 문자 하나 받음
    printf("Enter operator : ");
    scanf("%c", &operator);

    return 0;
} 