#include <stdio.h>

int main(){
    float mineralPurity;
    printf("�ش� ������ ������? : ");
    scanf("%f", &mineralPurity);  // �Է¹޴� �������� �����ڵ�, ������ ������ �ּҰ�

    double mineralPrice;
    printf("�ش� ���� ��ġ�� ���ΰ���? : ");
    scanf("%lf", &mineralPrice);

    printf("%f������ �ݾ��� %lf���Դϴ�.\n", mineralPurity, mineralPrice);
    return 0;
}