#include <stdio.h>

int main(){
    float mineralPurity;
    double mineralPrice;
    printf("�ش� ������ ������ �ݾ���? : ");
    scanf("%f %lf", &mineralPurity, &mineralPrice); 

    printf("%f������ �ݾ��� %lf���Դϴ�.\n", mineralPurity, mineralPrice);
    return 0;
}