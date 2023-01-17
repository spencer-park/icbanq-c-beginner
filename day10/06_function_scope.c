#include <stdio.h>

void swap1(int n1, int n2){
    printf("swap1�� ���� �� : %d %d\n", n1, n2);

    int temp = 0;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void swap2(int *n1, int *n2){
    printf("swap2�� ���� �� : %d %d\n", *n1, *n2);

    int temp = 0;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


int main(){
    int number1 = 5; int number2 = 3;
    printf("���� �� : %d %d\n", number1, number2);
    printf("\n");
    
    // swap1 �Լ��� ���� �õ�
    swap1(number1, number2);
    printf("swap1 ���� �� : %d %d\n", number1, number2);
    printf("\n");

    // swap2 �Լ��� ���� �õ�
    swap2(&number1, &number2);  // ���� �޸� �ּ� ����
    printf("swap2 ���� �� : %d %d\n", number1, number2);
}