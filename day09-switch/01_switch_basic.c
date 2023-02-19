#include <stdio.h>

int main(){
    int n = 3;

    switch(n){
        case 1:
            printf("1일 때 실행코드\n");
            break;
        case 2:
            printf("2일 때 실행코드\n");
            break;
        case 3:
            printf("3일 때 실행코드\n");
            break;
        default:
            printf("기본 실행코드\n");
    }

    return 0;
}