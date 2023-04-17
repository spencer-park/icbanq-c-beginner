/*
Windows와 그 외의 운영체제에서 CLEAR 매크로를 다르게 정의하고
system 함수를 사용하여 CLEAR 매크로가 정의된 값으로 
터미널을 실행합니다.
*/
#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

int main() {
    printf("Hello, world!\n");
    system(CLEAR);
    return 0;
}
