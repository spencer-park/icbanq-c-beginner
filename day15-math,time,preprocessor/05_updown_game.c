#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 100

int main() {
    int answer = 0, guess = 0, tries = 0;
    srand(time(NULL)); //랜덤 시드 설정
    answer = rand() % MAX_NUM + 1; // 1부터 100까지의 난수 생성

    printf("1~100 사이의 숫자를 맞춰보세요.\n");

    while (guess != answer) { //정답을 맞출 때까지 반복
        printf("숫자를 입력하세요: ");
        scanf("%d", &guess);
        tries++; //시도 횟수 증가

        if (guess > answer) {
            printf("Down!\n");
        } else if (guess < answer) {
            printf("Up!\n");
        }
    }
    
    printf("정답! 시도 횟수: %d\n", tries);
    return 0;
}