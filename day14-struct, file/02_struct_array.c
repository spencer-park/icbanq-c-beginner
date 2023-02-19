#include <stdio.h>
#include <string.h>

// 전처리기 #define : 상수 값을 지정하기 위한 예약어
#define MAX_STUDENTS 100

// 구조체 정의
struct student
{
    char name[20];
    int score;
};

// main 함수
int main()
{
    // 구조체를 이용한 배열 생성
    struct student students[MAX_STUDENTS]; // 100명 배열 생성
    int num_students, index;               // 실제 학생 수, for를 위한 index

    // 몇 명의 학생인지 입력
    printf("Enter the Number of Students: ");
    scanf("%d", &num_students);

    // 각 학생의 정보 입력
    for (index = 0; index < num_students; index++)
    {
        printf("Enter the name and score for Student %d: ", index + 1);
        scanf("%s %d", students[index].name, &students[index].score);
    }

    // 학생 정보 출력하기
    printf("Students and their scores:\n");
    for (index = 0; index < num_students; index++)
    {
        printf("%s: %d\n", students[index].name, students[index].score);
    }

    return 0;
}
