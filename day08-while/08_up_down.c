#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // �õ尪 �ʱ�ȭ
    int answer = rand() % 100 + 1; // 1���� 100 ������ ������ ���� ����
    int guess, count = 0; // ����� �Է°�, �õ� Ƚ�� ���� ���� �� �ʱ�ȭ


    // ������
    printf("������ �����մϴ�.\n");
    printf("1���� 100������ ���ڸ� ���纸����.\n");


    // ���ѷ���
    while (1) { 
        printf("���� �Է� : ");
        scanf("%d", &guess);
        count++;

        if (guess < answer) {
            printf("Up!\n");
        } else if (guess > answer) {
            printf("Down!\n");
        } else {
            printf("����! �õ� Ƚ�� : %d\n", count);
            break; // while ���� ����(Ż��)
        }
    }

    return 0;
}
