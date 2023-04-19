// 배열 복사 방법1 - for 반복을 활용
// 이 방법은 배열의 크기가 작거나 복사할 요소의 개수가 적을 때 유용
#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    int i;

    for (i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
