/*
signed는 양수와 음수를 전부 표현,
unsigned는 양수만 표현가능합니다.
손해보는 듯 보이지만, 표현할 수 있는 범위는 2^32로 동일합니다.
signed : -2^31 ~ 2^31-1
unsigned : 0 ~ 2^32-1
*/

#include <stdio.h>

int main(){
    unsigned int a = -3;
    printf("%u\n", a);  // unsigned는 %u로 쓰자
    printf("%d\n", a);  // %d도 되긴한다. 

    int b = -3;
    printf("%u\n", b); 
    printf("%d\n", b);
    // 저장된 데이터는 같으나 해석방식 00시? 24시? 12시?로 다르다고 생각하자.

    // 올바른 사용방법은
    unsigned int c = 5; // unsigned는 양수만!

    return 0;
}