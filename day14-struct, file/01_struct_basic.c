#include <stdio.h>
#include <string.h>

// ����ü ����
struct student {
    char name[20];
    int score;
};

// main �Լ�
int main() {
    // ����ü�� �̿��Ͽ� StudentA, StudentB ����
    struct student StudentA = {"Spencer", 100};
    struct student StudentB = {.name = "Dpencer", .score = 50};
    
    // ��� 1
    printf("%s: %d\n", StudentA.name, StudentA.score);
    printf("%s: %d\n", StudentB.name, StudentB.score);

    // StudentA ����
    StudentA.score -= 10;
    strcpy(StudentA.name, "Mark");

    // ��� 2
    printf("%s: %d\n", StudentA.name, StudentA.score);
    printf("%s: %d\n", StudentB.name, StudentB.score);

    return 0;
}
