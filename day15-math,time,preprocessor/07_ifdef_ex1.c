#include <stdio.h>

#define PRINT_HELLO_WORLD

int main() {
    #ifdef PRINT_HELLO_WORLD  // PRINT_HELLO_WORLD가 정의되었는지 확인
        printf("Hello, World!\n");
    #endif
        return 0;
}
