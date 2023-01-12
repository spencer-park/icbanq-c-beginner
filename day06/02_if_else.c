/*
어린이 : 만 6~12세
청소년 : 만 13~18세
일반 : 만 19세~
*/

#include <stdio.h>

int main(){
    int age = 2;

    if (age >= 19){
        printf("일반 요금입니다.\n");
    }
    else{
        printf("일반 요금이 아닙니다.\n");
    }
}