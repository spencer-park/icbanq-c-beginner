// 02_switch_calc.c �� �Լ� ����ؼ� �����غ���
#include <stdio.h>

int calculate(int n1, int n2, char operator){
    switch (operator){
        case '+':
            return n1 + n2;
        case '-':
            return n1 - n2;
        case '*':
            return n1 * n2;
        case '/':
            return n1 / n2;   
    }
}

int main(){
    // �Լ� ����
    int result = calculate(3, 5, 'c');
    printf("����� %d\n", result);

    return 0;
}