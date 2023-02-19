// 비교(Comparision) 연산자, 또는 관계(Relational) 연산자
#include <stdio.h>

int main(){
    int x = 3, y = 5, z = 3;
    printf("x = %d y = %d z = %d\n", x, y, z); 

    // == 값이 같다.
    printf("%d == %d >>> %d\n", x, y, x==y); 
    printf("%d == %d >>> %d\n", x, z, x==z); 

    // 크다, 크거나 같다
    printf("%d > %d >>> %d\n", x, z, x>z); 
    printf("%d >= %d >>> %d\n", x, z, x>=z); 

    // 작다, 작거나 같다
    printf("%d < %d >>> %d\n", x, z, x<z); 
    printf("%d <= %d >>> %d\n", x, z, x<=z); 

    // 다르다. !는 부정의 의미
    printf("%d != %d >>> %d\n", x, y, x!=y); 
    printf("%d != %d >>> %d\n", x, z, x!=z); 

    return 0;
}