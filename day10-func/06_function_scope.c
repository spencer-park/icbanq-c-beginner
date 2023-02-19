#include <stdio.h>

void swap1(int n1, int n2){
    printf("swap1에 들어온 값 : %d %d\n", n1, n2);

    int temp = 0;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void swap2(int *n1, int *n2){
    printf("swap2에 들어온 값 : %d %d\n", *n1, *n2);

    int temp = 0;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


int main(){
    int number1 = 5; int number2 = 3;
    printf("실행 전 : %d %d\n", number1, number2);
    printf("\n");
    
    // swap1 함수로 변경 시도
    swap1(number1, number2);
    printf("swap1 실행 후 : %d %d\n", number1, number2);
    printf("\n");

    // swap2 함수로 변경 시도
    swap2(&number1, &number2);  // 변수 메모리 주소 전달
    printf("swap2 실행 후 : %d %d\n", number1, number2);
}