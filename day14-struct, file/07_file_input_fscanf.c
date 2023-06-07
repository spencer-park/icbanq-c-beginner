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
    // fscanf(fp, "%s", data); 
    fscanf(fp, "%[^\n]s", data);   
    /*
    �о�� �����Ͱ� ������ �����ϴ� ���ڿ��̶��, 
    %s ��� %[^\n]s�� ���� ����
    ���� ����(\n)�� ������ ��� ���ڸ� ���ڿ��� �н��ϴ�.
    http://port70.net/~nsz/c/c11/n1570.html#7.21.6.2
    */ 

    // ���� �ݱ�
    fclose(fp);

    // �о�� ������ ���
    printf("���Ͽ��� �о�� ������: %s", data);

    return 0;
}
