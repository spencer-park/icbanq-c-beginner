// 01_for.c�� �� - ���� �ϴ� �Ǽ�
// ���ѹݺ� -> Ctrl + C�� Ż��
#include <stdio.h>

int main(){
    int age;

    while (age < 20){
        age = 1;  // �ݺ��� �ȿ� �ʱ�ȭ�� �ϸ� ��� �ʱ�ȭ
        printf("���� ���� >>> %d\n", age);
        age++;
    }
    printf("���� �����Դϴ�!\n");

    return 0;
}