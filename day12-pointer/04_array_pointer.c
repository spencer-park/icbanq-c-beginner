// �ۼ� �� pythontutor�� Ȯ���غ���.
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // �迭�� ù ��° ��Ҹ� ����Ű�� ������ ����, ������ ������ �ּҸ� �����Ѵ�.
    int i;

    // �迭�� ������ ������ ����غ��� ���� ���ñ�?
    printf("Array arr : %p \n", arr);
    printf("Array arr[0] : %d \n", arr[0]);

    // ������ ���
    printf("Pointer Referenc ptr : %p \n", ptr);
    printf("Pointer Value *ptr : %d \n", *ptr);
    printf("Pointer Address &ptr : %p \n", &ptr);  // �� ������� �ʴ´�.

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i)); // �迭�� ���� ���
    }

    return 0;
}
