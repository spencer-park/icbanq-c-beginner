/*
Windows�� �� ���� �ü������ CLEAR ��ũ�θ� �ٸ��� �����ϰ�
system �Լ��� ����Ͽ� CLEAR ��ũ�ΰ� ���ǵ� ������ 
�͹̳��� �����մϴ�.
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
