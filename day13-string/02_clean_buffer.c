#include <stdio.h>

int main()
{
    char name[20];
    int age;

    printf("�̸��� �Է��ϼ���: ");
    scanf("%s", name);
    while (getchar() != '\n')
        ; // �Է� ���� ����

    printf("���̸� �Է��ϼ���: ");
    scanf("%d", &age);
    while (getchar() != '\n')
        ; // �Է� ���� ����

    printf("�Էµ� �̸��� %s�̰�, ���̴� %d���Դϴ�.\n", name, age);

    return 0;
}
