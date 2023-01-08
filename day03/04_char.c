/*
숫자도 -128~127을 저장할 수 있지만 ,
주로 알파벳 문자 1개를 저장할 때 쓰인다. 
%c는 문자 인코딩 코드표에서 매칭된 값을 포맷해준다. 아스키코드표를 보자 */

#include <stdio.h>

int main(){
    char c1 = 65;
    char c2 = 'A';

    printf("%c %c\n", c1, c2);
    printf("%d %d\n", c1, c2);

    return 0;
}