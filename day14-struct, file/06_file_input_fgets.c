#include <stdio.h>

int main()
{
    // ���� ������ ����
    FILE *fp;

    // ���� ����
    fp = fopen("output.txt", "r");

    // ���� ���� ���н�
    if (fp == NULL)
    {
        printf("������ ���� ���߽��ϴ�.");
        return 1;
    }

    // ���Ͽ��� �����͸� �о��
    char data[100];
    fgets(data, 100, fp);

    // ���� �ݱ�
    fclose(fp);

    // �о�� ������ ���
    printf("���Ͽ��� �о�� ������: %s", data);

    return 0;
}
