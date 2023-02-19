#include <stdio.h>
#include <string.h>

// 구조체 정의
struct student {
    char name[20];
    int score;
};

// main 함수
int main() {
    // 구조체를 이용하여 StudentA, StudentB 생성
    struct student StudentA = {"Spencer", 100};
    struct student StudentB = {.name = "Dpencer", .score = 50};
    
    // 출력 1
    printf("%s: %d\n", StudentA.name, StudentA.score);
    printf("%s: %d\n", StudentB.name, StudentB.score);

    // StudentA 수정
    StudentA.score -= 10;
    strcpy(StudentA.name, "Mark");

    // 출력 2
    printf("%s: %d\n", StudentA.name, StudentA.score);
    printf("%s: %d\n", StudentB.name, StudentB.score);

    return 0;
}
