// 01_for.c와 비교 - 많이 하는 실수
// 무한반복 -> Ctrl + C로 탈출
#include <stdio.h>

int main(){
    int age;

    while (age < 20){
        age = 1;  // 반복문 안에 초기화를 하면 계속 초기화
        printf("현재 나이 >>> %d\n", age);
        age++;
    }
    printf("이제 성인입니다!\n");

    return 0;
}