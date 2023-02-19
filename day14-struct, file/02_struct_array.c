#include <stdio.h>
#include <string.h>

// ��ó���� #define : ��� ���� �����ϱ� ���� �����
#define MAX_STUDENTS 100

// ����ü ����
struct student
{
    char name[20];
    int score;
};

// main �Լ�
int main()
{
    // ����ü�� �̿��� �迭 ����
    struct student students[MAX_STUDENTS]; // 100�� �迭 ����
    int num_students, index;               // ���� �л� ��, for�� ���� index

    // �� ���� �л����� �Է�
    printf("Enter the Number of Students: ");
    scanf("%d", &num_students);

    // �� �л��� ���� �Է�
    for (index = 0; index < num_students; index++)
    {
        printf("Enter the name and score for Student %d: ", index + 1);
        scanf("%s %d", students[index].name, &students[index].score);
    }

    // �л� ���� ����ϱ�
    printf("Students and their scores:\n");
    for (index = 0; index < num_students; index++)
    {
        printf("%s: %d\n", students[index].name, students[index].score);
    }

    return 0;
}
