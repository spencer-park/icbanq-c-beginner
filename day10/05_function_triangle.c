// 02_switch_calc.c �� �Լ� ����ؼ� �����غ���
#include <stdio.h>

float triangle(float n1, float n2){
    // return n1 * n2 / 2;

    float result = n1 * n2 / 2;
    return result;
}

int main(){
    // variable scope
    // printf("%lf", result); // ���� ��

    // ������ �Լ��� return���� �޴´�.
    float w = 5; float h = 3;
    float tri = triangle(w, h);
    printf("���� %.1lf ���� %.1lf�� �ﰢ�� ���̴� %.1lf\n", w, h, tri);
}