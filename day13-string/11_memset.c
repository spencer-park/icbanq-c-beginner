// memcpy는 day11 배열에서 해보았다.
// memset(적용할메모리주소, 초기화할 값, 초기화할 메모리 크기)
// 전달된 메모리의 모든 바이트를 지정된 값으로 초기화합니다.

#include <stdio.h>
#include <string.h>

int main()
{
    int arr[5];
    memset(arr, 0, sizeof(arr)); // arr 배열의 모든 요소를 0으로 초기화
    // memset(arr, 1, sizeof(arr)); // 16843009로 나옴, unsigned char로 형변환 -> 1 -> 0x01 -> 00000001 -> 10진수 변환시 16843009
    // 사실 상 memset() 함수를 사용해서 배열을 1로 초기화하는 방법은 없다. 
    // for로 초기화 하는 것이 일반적
    // for (int i = 0; i < 5; i++) {
    //     arr[i] = 1; // 모든 요소를 1로 변경
    // }


    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // 0 0 0 0 0 출력
    }
    printf("\n");

    return 0;
}
