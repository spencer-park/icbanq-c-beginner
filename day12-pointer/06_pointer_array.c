#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int *pArr[3]; // �����͵鸸 ������ �迭 ����


    // �迭�� ����� ������ �ּҸ� ��Ÿ����(����Ű��)������ ������ �� ����
    for (int i = 0; i < 3; i++)
    {
        pArr[i] = &arr[i];
    }

    for (int i = 0; i < 3; i++)
    {
        printf("pArr[%d] = %p, *pArr[%d] = %d\n", i, pArr[i], i, *pArr[i]);
    }

    return 0;
}