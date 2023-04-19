// 배열 복사 방법2 - memcpy 함수를 이용
// string.h 라이브러리에 정의된 함수로, 메모리 영역을 복사하는 함수
// 배열의 크기나 복사할 요소의 개수와 상관없이 사용 가능
#include <stdio.h>
#include <string.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    
    memcpy(arr2, arr1, sizeof(arr1));

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
