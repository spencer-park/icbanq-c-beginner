#include <stdio.h>

int main(){
    double n1, n2;
    char operator;

    // �̰� �ǰ�
    // printf("Enter two number : ");
    // scanf("%lf %lf", &n1, &n2);
    // printf("Enter operator : ");
    // scanf("%c", &operator);

    // �̰� �ȵ�
    // printf("Enter two number : ");
    // scanf("%lf %lf", &n1, &n2);
    // printf("Enter operator : "); // ���Ͱ� ��
    // scanf("%c", &operator);

    // sol1
    printf("Enter two number : ");
    scanf("%lf %lf", &n1, &n2);
    getchar();  // ǥ�� �Է� ��Ʈ��(stdin)���� ���� �ϳ� ����
    printf("Enter operator : ");
    scanf("%c", &operator);

    return 0;
} 