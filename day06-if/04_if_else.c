/*
�Ĺ� Ű��� �µ� ����
*/

#include <stdio.h>

int main(){
    int led = 0;  // LED ���� ����
    int temperature = 23;

    // Quiz : led���� �˻��� ��, �µ����� �˻��� �� ����غ���
    // Quiz : �µ����� �˻縦 �Ѵٸ�? �ڵ带 �ۼ��غ���.
    if (led){
        if (temperature < 15){
            printf("LED ON\n");
        }else{
            printf("LED OFF\n");
        }
    }else{
        printf("LED�� �����ϼ���\n");
    }
}