#include <stdio.h>

int main(){
    int total = 1;
    int goal = 10000;

    for (; total < goal;){
        total *= 2;
        printf("total >>> %d\n", total);
    }

    return 0;
}