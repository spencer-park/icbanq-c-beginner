// 비교(Comparision) 연산자, 또는 관계(Relational) 연산자
#include <stdio.h>

int main(){
    int x = 3, y = 5, z = 3, r;
    printf("x = %d y = %d z = %d\n", x, y, z); 

    // && : and - 둘 다 참이여야 참. 하나라도 거짓이면 거짓
    r = (x == y) && (x == z);  // 거짓
    printf("%d == %d && %d == %d >>> %d\n", x, y, x, z, r);
    
    r = (x != y) && (x == z);  // 참
    printf("%d != %d && %d == %d >>> %d\n", x, y, x, z, r);


    // || : or - 둘 다 거짓이여야 거짓. 하나라도 참이면 참
    r = (x == y) || (x == z);  // 참
    printf("%d == %d || %d == %d >>> %d\n", x, y, x, z, r);
    
    r = (x == y) || (x > z);  // 거짓
    printf("%d == %d || %d > %d >>> %d\n", x, y, x, z, r);
    

    // not : !
    r = !(x==y);  // 거짓 -> 참
    printf("!(%d == %d) >>> %d\n", x, y, r);

    r = !(x==z);  // 참 -> 거짓
    printf("!(%d == %d) >>> %d\n", x, z, r);

    return 0;
}