#include <stdio.h>

int main()
{
    // ���� ������ ����
    FILE *fp;

    // ���� ����
    fp = fopen("output.txt", "w");

    // ���� ���� ���н�
    if (fp == NULL)
    {
        printf("������ ���� ���߽��ϴ�.");
        return 1;
    }

    // ���Ͽ� �����͸� ����
    fprintf(fp, "Hello World!");

    // ���� �ݱ�
    fclose(fp);

    printf("���Ͽ� �����͸� ����ϴ�.");

    return 0;
}