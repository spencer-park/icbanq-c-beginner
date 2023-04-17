#include <stdio.h>

int main() {
  int x = 10;
  int * ptr = &x;

  printf("x의 값: %d\n", x);
  printf("x의 주소: %p\n", &x);
  printf("ptr의 값: %p\n", ptr);
  return 0;
}
