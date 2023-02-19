#include <stdio.h>

int main()
{
    char name[20];
    int age;

    printf("이름을 입력하세요: ");
    scanf("%s", name);
    while (getchar() != '\n')
        ; // 입력 버퍼 비우기

    printf("나이를 입력하세요: ");
    scanf("%d", &age);
    while (getchar() != '\n')
        ; // 입력 버퍼 비우기

    printf("입력된 이름은 %s이고, 나이는 %d살입니다.\n", name, age);

    return 0;
}
