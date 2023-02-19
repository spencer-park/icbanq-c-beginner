#include <stdio.h>

int main(){
    // 배열 선언과 초기화
    int score[] = {0, 90, 60, 0, 40, 0, 80}; 

    // 0인 값들만 찾아 데이터 수정
    int arrayLen = sizeof(score) / sizeof(score[0]);

    // 순차 탐색 및 입력
    for(int index = 0; index < arrayLen; index++){
        if (score[index] == 0){
            printf("%d번째 점수 입력: ", index);
            scanf("%d", &score[index]);
        }
    }

    // 순차 출력
    for(int index = 0; index < arrayLen; index++){
        printf("%d번째 점수는 %d\n", index, score[index]);
    }

    return 0;
}