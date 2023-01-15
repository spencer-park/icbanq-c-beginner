/* [주의] 초기값 위치에 int count처럼 선언&할당을 할 경우*/
#include <stdio.h>

int main(){
    int count = 0;

    // for (int count = 1; count < 21; count++){  
    for (count = 1; count < 21; count++){
        printf("%d ", count);
    }
    printf("\n%d\n", count);
  
    return 0;
}