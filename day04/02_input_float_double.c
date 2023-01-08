#include <stdio.h>

int main(){
    float mineralPurity;
    printf("해당 광물의 순도는? : ");
    scanf("%f", &mineralPurity);  // 입력받는 데이터의 포맷코드, 저장할 변수의 주소값

    double mineralPrice;
    printf("해당 보물 가치는 얼마인가요? : ");
    scanf("%lf", &mineralPrice);

    printf("%f순도의 금액은 %lf원입니다.\n", mineralPurity, mineralPrice);
    return 0;
}