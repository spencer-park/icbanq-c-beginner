/*
[심화] 확률을 생각하며 if문 작성하기
보통이라면 범위를 생각하며 작성하는 것이 좋겠으나,
조금이라도 속도를 올리기 위해 확률 순으로 if문을 작성하기도 한다.

만일 온도가 15이상일 확률이 70% 미만은 30%인 환경이라면
15도 이상인지부터 확인하는 것이 더 이상적
*/

#include <stdio.h>

int main(){
    int led = 0;  // LED 연결 여부
    int temperature = 23;

    if (led){
        if (temperature >= 15){
            printf("LED OFF\n");
        }else{
            printf("LED ON\n");
        }
    }else{
        printf("LED를 연결하세요\n");
    }
}