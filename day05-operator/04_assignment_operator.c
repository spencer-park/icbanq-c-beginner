// 할당 연산자 = += -= *= /= %=
// += : 증가량은~, -= : 감소량은~, *= 곱할 값은~
#include <stdio.h>

int main(){
    int r = 3;
    printf("r = %d\n", r);

    r += 5;
    printf("r += 5 >>> %d\n", r);

    r -= 3;
    printf("r -= 3 >>> %d\n", r);

    r *= 4;
    printf("r *= 4 >>> %d\n", r);

    r /= 2;
    printf("r /= 4 >>> %d\n", r);

    r %= 3;
    printf("r %= 3 >>> %d\n", r);

    return 0;
}