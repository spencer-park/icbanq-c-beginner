#include <stdio.h>

int main() {
    int num, i;
    int max = -9999999, min = 99999999;  // �ִ밪, �ּҰ��� ������ ���� �ʱ�ȭ

    printf("Enter Number : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        int n;
        printf("Enter an integer: ");
        scanf("%d", &n);

        // �Է¹��� ���� �ִ밪���� ũ�� max ������ ����
        if (n > max) {
            max = n;
        }

        // �Է¹��� ���� �ּҰ����� ������ min ������ ����
        if (n < min) {
            min = n;
        }
    }

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}
