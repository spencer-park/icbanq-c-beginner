#include <stdio.h>

int main(){
    // 배열 선언과 초기화
    int score[10] = {0,};  // 모든 값이 0으로 초기화 된다. {0}도 되지만 {0,}을 선호하는 편

    // 특정 인덱스 값에 데이터 수정 입력
    printf("5번째 점수 : ");
    scanf("%d", &score[5]);

    // 순차 출력
    int arrayLen = sizeof(score) / sizeof(score[0]);

    for(int index = 0; index < arrayLen; index++){
        printf("%d번째 점수는 %d\n", index, score[index]);
    }

    return 0;
}