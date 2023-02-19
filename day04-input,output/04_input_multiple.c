#include <stdio.h>

int main(){
    float mineralPurity;
    double mineralPrice;
    printf("해당 광물의 순도와 금액은? : ");
    scanf("%f %lf", &mineralPurity, &mineralPrice); 

    printf("%f순도의 금액은 %lf원입니다.\n", mineralPurity, mineralPrice);
    return 0;
}