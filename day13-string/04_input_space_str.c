// fgets() �Լ��� ����Ͽ� ���ڿ��� �Է¹����� ���� �Է� ����
// 3��° ���� : stdin���� �Է��� �ް�(�츮�� �Է��ϴ� ���� stdin��) 
// 1��° ���� : ������ ���ۿ� �Է��� ����
// 2��° ���� : �Է� ���� ���ڿ��� �ִ� ���̸� ����
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter Str: ");
    fgets(str, sizeof(str), stdin);

    printf("Input Str: %s", str);

    return 0;
}
