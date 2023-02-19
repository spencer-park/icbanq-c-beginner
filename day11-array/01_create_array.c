#include <stdio.h>

int main(){
    // 배열 선언
    int score[4];  // int형 배열 * 길이 4

    // 값 할당(초기화), 길이 4 == 정상적인 index 0~3
    score[0] = 100;
    score[1] = 90;
    score[3] = 90;

    // 출력
    printf("score 0번 값은 %d 입니다.\n", score[0]);
    printf("score 1번 값은 %d 입니다.\n", score[1]);

    // Q1. 없는 index의 데이터 값을 저장하면?
    // score[4] = 60;
    // printf("score 4번 값은 %d 입니다.\n", score[4]);

    // Q2. 없는 index의 데이터 값을 출력하면?
    // printf("score 4번 값은 %d 입니다.\n", score[4]);

    // 2. 초기화 하지 않은 index의 데이터 값을 출력하면?
    printf("score 2번 값은 %d 입니다.\n", score[2]);

    return 0;
}