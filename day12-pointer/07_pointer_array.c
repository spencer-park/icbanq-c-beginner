#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int *pArr[3]; // 포인터들만 저장할 배열 생성


    // 배열에 저장된 데이터 주소를 나타내는(가리키는)포인터 변수를 각 생성
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