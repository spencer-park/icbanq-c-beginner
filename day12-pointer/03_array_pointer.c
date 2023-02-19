// 작성 후 pythontutor로 확인해보자.
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // 배열의 첫 번째 요소를 가리키는 포인터 변수, 포인터 변수는 주소를 저장한다.
    int i;

    // 배열을 저장한 변수를 출력해보면 뭐가 나올까?
    printf("Array arr : %p \n", arr);
    printf("Array arr[0] : %d \n", arr[0]);

    // 포인터 출력
    printf("Pointer Referenc ptr : %p \n", ptr);
    printf("Pointer Value *ptr : %d \n", *ptr);
    printf("Pointer Address &ptr : %p \n", &ptr);  // 잘 사용하지 않는다.

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i)); // 배열의 값을 출력
    }

    return 0;
}
