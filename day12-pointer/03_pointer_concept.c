#include <stdio.h>

int main()
{
    // int�� ���� 5���� �����ϰ� ���� �ʱ�ȭ
    int arr[5] = {1, 2, 3, 4, 5};

    // ���� 1 : �迭�� �ε����� �̿��Ͽ� ������ ���� ���
    printf("%d\n", arr[0]); // 1 ���
    printf("%d\n", arr[1]); // 2 ���
    printf("%d\n", arr[2]); // 3 ���
    printf("%d\n", arr[3]); // 4 ���
    printf("%d\n", arr[4]); // 5 ���

    // �迭�� �� ��ҿ� ���� �ּҸ� ���
    printf("%p\n", &arr[0]); // arr[0]�� �ּ� ���
    printf("%p\n", &arr[1]); // arr[1]�� �ּ� ���
    printf("%p\n", &arr[2]); // arr[2]�� �ּ� ���
    printf("%p\n", &arr[3]); // arr[3]�� �ּ� ���
    printf("%p\n", &arr[4]); // arr[4]�� �ּ� ���

    // ���� 2. ������ ���� ����
    int *ptr = &arr[0];

    // �迭 �� ��� ���(������ ������ �̿��� ���)
    printf("%d\n", *ptr);       // arr[0]�� �� ���
    printf("%d\n", *(ptr + 1)); // arr[1]�� �� ���
    printf("%d\n", *(ptr + 2)); // arr[2]�� �� ���
    printf("%d\n", *(ptr + 3)); // arr[3]�� �� ���
    printf("%d\n", *(ptr + 4)); // arr[4]�� �� ���

    // ptr������ ����Ű�� �ּ� �� -> �� ����� �ּ� ��
    printf("%d\n", *ptr); // ptr�� ����Ű�� �ּ� ���
    printf("%d\n", *(ptr + 1));
    printf("%d\n", *(ptr + 2));
    printf("%d\n", *(ptr + 3));
    printf("%d\n", *(ptr + 4));
}