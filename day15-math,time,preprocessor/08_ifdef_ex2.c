#include <stdio.h>

#define THRESHOLD 10

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    #ifdef THRESHOLD  // THRESHOLD�� ���ǵǾ����� Ȯ��
    if (num > THRESHOLD) {
        printf("Big number!\n");
    }
    else {
        printf("Small number!\n");
    }
    #endif
    
    return 0;
}
