#include <stdio.h>

// �Լ��� ����(���)
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

// main �Լ�
int main() {
    int num1 = 10, num2 = 20, result;

    // �Լ��� ȣ��
    result = add(num1, num2);
    printf("res : %d add %d is %d\n", num1, num2, result);

    result = sub(num1, num2);
    printf("res : %d sub %d is %d\n", num1, num2, result);

    result = mul(num1, num2);
    printf("res : %d mul %d is %d\n", num1, num2, result);



    return 0;
}

// �Լ��� ����(�ϴ�)
int add(int a, int b) {
    int res = a + b;
    return res;
}

int sub(int a, int b) {
    int res = a - b;
    return res;
}

int mul(int a, int b) {
    int res = a * b;
    return res;
}