#include <stdio.h>

int main(){
    double n1, n2;
    char operator;

    // ���� �ڵ�
    printf("Enter formula : ");
    scanf("%lf %c %lf", &n1, &operator, &n2);

    // switch��
    switch (operator)
    {
    case '+':
        printf("%lf %c %lf = %lf\n", n1, operator, n2, n1+n2);
        break;
    case '-':
        printf("%lf %c %lf = %lf\n", n1, operator, n2, n1-n2);
        break;
    case '*':
        printf("%lf %c %lf = %lf\n", n1, operator, n2, n1*n2);
        break;
    case '/':
        printf("%lf %c %lf = %lf\n", n1, operator, n2, n1/n2);
        break;   
    default:
        printf("Invalid operator!\n");
    }

    return 0;
}