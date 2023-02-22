#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // 시드값 초기화
    int answer = rand() % 100 + 1; // 1부터 100 사이의 랜덤한 정수 생성
    int guess, count = 0; // 사용자 입력값, 시도 횟수 변수 선언 및 초기화


    // 오프닝
    printf("게임을 시작합니다.\n");
    printf("1부터 100사이의 숫자를 맞춰보세요.\n");


    // 무한루프
    while (1) { 
        printf("숫자 입력 : ");
        scanf("%d", &guess);
        count++;

        if (guess < answer) {
            printf("Up!\n");
        } else if (guess > answer) {
            printf("Down!\n");
        } else {
            printf("정답! 시도 횟수 : %d\n", count);
            break; // while 루프 종료(탈출)
        }
    }

    return 0;
}
