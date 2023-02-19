/*
식물 키우기 온도 조절
*/

#include <stdio.h>

int main(){
    int led = 0;  // LED 연결 여부
    int temperature = 23;

    // Quiz : led부터 검사할 지, 온도부터 검사할 지 고민해보자
    // Quiz : 온도부터 검사를 한다면? 코드를 작성해보자.
    if (led){
        if (temperature < 15){
            printf("LED ON\n");
        }else{
            printf("LED OFF\n");
        }
    }else{
        printf("LED를 연결하세요\n");
    }
}