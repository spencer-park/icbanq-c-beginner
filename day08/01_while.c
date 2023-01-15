// 01_for.c와 비교
#include <stdio.h>

int main(){
    int age;

    age = 1;
    while (age < 20){
        printf("현재 나이 >>> %d\n", age);
        age++;
    }
    printf("이제 성인입니다!\n");

    return 0;
}