#include <stdio.h>
#include <math.h>

int main() {
    double x = 2.5;
    double y = 3.0;
    double result;

    // Á¦°ö±Ù °è»ê
    result = sqrt(x);
    printf("sqrt(%f) = %f\n", x, result);

    // °ÅµìÁ¦°ö °è»ê
    result = pow(x, y);
    printf("%f^%f = %f\n", x, y, result);

    // pi = 3.141592...
    printf("PI = %.10f\n", M_PI);

    // »ï°¢ÇÔ¼ö °è»ê
    double angle = 45.0;
    double radians = angle * M_PI / 180.0;  // degree -> radians
    result = sin(radians);
    printf("sin(%f) = %f\n", angle, result);

    // ·Î±× °è»ê
    result = log(x);
    printf("ln(%f) = %f\n", x, result);

    return 0;
}
