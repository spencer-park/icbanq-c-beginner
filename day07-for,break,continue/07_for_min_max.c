#include <stdio.h>

int main() {
    int num, i;
    int max = -9999999, min = 99999999;  // 최대값, 최소값을 저장할 변수 초기화

    printf("Enter Number : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        int n;
        printf("Enter an integer: ");
        scanf("%d", &n);

        // 입력받은 값이 최대값보다 크면 max 변수를 갱신
        if (n > max) {
            max = n;
        }

        // 입력받은 값이 최소값보다 작으면 min 변수를 갱신
        if (n < min) {
            min = n;
        }
    }

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}
