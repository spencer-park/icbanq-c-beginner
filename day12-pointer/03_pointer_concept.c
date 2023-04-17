#include <stdio.h>

int main()
{
    // int형 변수 5개를 선언하고 값을 초기화
    int arr[5] = {1, 2, 3, 4, 5};

    // 실험 1 : 배열의 인덱스를 이용하여 각각의 값을 출력
    printf("%d\n", arr[0]); // 1 출력
    printf("%d\n", arr[1]); // 2 출력
    printf("%d\n", arr[2]); // 3 출력
    printf("%d\n", arr[3]); // 4 출력
    printf("%d\n", arr[4]); // 5 출력

    // 배열의 각 요소에 대한 주소를 출력
    printf("%p\n", &arr[0]); // arr[0]의 주소 출력
    printf("%p\n", &arr[1]); // arr[1]의 주소 출력
    printf("%p\n", &arr[2]); // arr[2]의 주소 출력
    printf("%p\n", &arr[3]); // arr[3]의 주소 출력
    printf("%p\n", &arr[4]); // arr[4]의 주소 출력

    // 실험 2. 포인터 변수 생성
    int *ptr = &arr[0];

    // 배열 각 요소 출력(포인터 연산을 이용할 경우)
    printf("%d\n", *ptr);       // arr[0]의 값 출력
    printf("%d\n", *(ptr + 1)); // arr[1]의 값 출력
    printf("%d\n", *(ptr + 2)); // arr[2]의 값 출력
    printf("%d\n", *(ptr + 3)); // arr[3]의 값 출력
    printf("%d\n", *(ptr + 4)); // arr[4]의 값 출력

    // ptr변수가 가리키는 주소 값 -> 각 요소의 주소 값
    printf("%d\n", *ptr); // ptr가 가리키는 주소 출력
    printf("%d\n", *(ptr + 1));
    printf("%d\n", *(ptr + 2));
    printf("%d\n", *(ptr + 3));
    printf("%d\n", *(ptr + 4));
}