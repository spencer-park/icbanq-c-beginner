#include <stdio.h>

#define PRINT_HELLO_WORLD

int main() {
    #ifdef PRINT_HELLO_WORLD  // PRINT_HELLO_WORLD�� ���ǵǾ����� Ȯ��
        printf("Hello, World!\n");
    #endif
        return 0;
}
