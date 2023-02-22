// pythontutor로 흐름 쫓아가기
#include <stdio.h>

int main() {
    // 2차원 배열 선언과 초기화
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    // 2차원 배열 값 출력
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
