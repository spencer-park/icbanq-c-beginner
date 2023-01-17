#include <stdio.h>

void brushing(char username[]){  // char *username 도 가능
    printf("%s는\n", username);
    printf("칫솔에\n");
    printf("치약을 짜고\n");
    printf("이를 닦고\n");
    printf("입을 헹굽니다\n");
}

int main(){
    // 함수 실행
    brushing("스펜서");

    return 0;
}