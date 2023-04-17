#include <stdio.h>

int main(){
    int n = 3;

    switch(n){
        case 1:case 2:case 3:
            printf("1~3일 때 실행코드\n");
            break;
        default:
            printf("기본 실행코드\n");
    }

    if (n < 4 && n >= 1 ){
        printf("1~3일 때 실행코드\n");
    }else{
        printf("기본 실행코드\n");
    }

    return 0;
}