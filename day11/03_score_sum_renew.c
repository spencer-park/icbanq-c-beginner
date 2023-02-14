#include <stdio.h>

int main(){
    // 배열 선언과 초기화
    int totalScore = 0;
    int score[] = {100, 90, 80, 70};  // 우측에 초기화를 하면 배열 길이가 자동으로 계산된다.


    // total score 구하기 - 정해진 길이가 있으니 for가 적합
    // 배열 길이를 구하려면?
    int arrayLen = sizeof(score) / sizeof(score[0]); // 4 = int 4개 메모리 크기 / int 1개 메모리 크기

    for(int index = 0; index < arrayLen; index++){
        totalScore += score[index];
        printf("통합 점수 %d, 더해진 값 %d\n", totalScore, score[index]);
    }

    printf("통합 점수는 %d 입니다.\n", totalScore);
    // Quiz 1. 평균도 계산하여 출력해보세요.

    return 0;
}