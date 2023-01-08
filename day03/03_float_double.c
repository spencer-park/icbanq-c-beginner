#include <stdio.h>

int main(){
    // int a = 2147483648; // 2147483647 + 1
    // warning: implicit conversion from 'long' to 'int' changes value from 2147483648 to -2147483648

    float f1 = 2147483648; // 2147483647 + 1
    printf("%f\n", f1);

    float f2 = 50e10;
    printf("%f\n", f2); // 부동소수점 오차

    double d1 = 2147483648; // 2147483647 + 1
    printf("%lf\n", d1);

    double d2 = 50e10;
    printf("%lf\n", d2); // f2에 비해 정확하게 나온다.
    
    return 0;
}