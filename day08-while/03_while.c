// 03_for.c¿Í ºñ±³
#include <stdio.h>

int main(){
    int total = 1;
    int goal = 10000;

    while (total < goal){
        total *= 2;
        printf("total >>> %d\n", total);
    }

    return 0;
}