#include <stdio.h>

int main(){
    // �迭 ����� �ʱ�ȭ
    int totalScore = 0;
    // int score[4] = {100, 90, 80, 70};  // int�� �迭 * ���� 4
    int score[] = {100, 90, 80, 70};  // ������ �ʱ�ȭ�� �ϸ� �迭 ���̰� �ڵ����� ���ȴ�.


    // total score ���ϱ� - ������ ���̰� ������ for�� ����
    for (int index = 0; index < 4; index++){
        totalScore += score[index];
        printf("���� ���� %d, ������ �� %d\n", totalScore, score[index]);
    }
    printf("���� ������ %d �Դϴ�.\n", totalScore);

    return 0;
}