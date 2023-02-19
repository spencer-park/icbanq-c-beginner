/* int는 4바이트(=32비트)로 2의 32승의 수를 표현할 수 있습니다.
범위  : -2147483648 ~ 2147483647

short는 2바이트로(=16비트)로 2의 16승의 수를 표현할 수 있습니다.
범위 : -32,768~32,767
*/
#include <stdio.h>

int main(){
    int age = 50;
    // int height, weight = 250, 150; 
    int height, weight; 
    height = 250;
    weight = 150;

    printf("%d %d %d", age, height, weight);

    // short wallet = 50000;
    int wallet = 50000;

    return 0;
}