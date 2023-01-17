// 02_switch_calc.c 를 함수 사용해서 정의해보자
#include <stdio.h>

float triangle(float n1, float n2){
    // return n1 * n2 / 2;

    float result = n1 * n2 / 2;
    return result;
}

int main(){
    // variable scope
    // printf("%lf", result); // 범위 밖

    // 때문에 함수로 return값을 받는다.
    float w = 5; float h = 3;
    float tri = triangle(w, h);
    printf("가로 %.1lf 세로 %.1lf인 삼각형 넓이는 %.1lf\n", w, h, tri);
}