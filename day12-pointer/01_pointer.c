#include <stdio.h>

int main() {
  int x = 10;
  int * ptr = &x;

  printf("x�� ��: %d\n", x);
  printf("x�� �ּ�: %p\n", &x);
  printf("ptr�� ��: %p\n", ptr);
  return 0;
}
