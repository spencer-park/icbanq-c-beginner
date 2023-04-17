#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 100

int main() {
    int answer, guess, tries = 0;
    srand(time(NULL)); // 시드값 설정
    answer = rand() % MAX_NUM + 1; // 1부터 100까지의 난수 생성
    
    printf("1~100 사이의 숫자를 맞춰보세요.\n");
    do {
        printf("숫자를 입력하세요: ");
        scanf("%d", &guess);
        tries++;
        
        if (guess > answer) {
            printf("Down!\n");
        } else if (guess < answer) {
            printf("Up!\n");
        }
    } while (guess != answer);
    
    printf("정답! 시도 횟수: %d\n", tries);
    return 0;
}
