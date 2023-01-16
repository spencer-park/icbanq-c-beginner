// collatz
#include <stdio.h>

int main(){
    int number = 100000;

    // 100회만 해보자.
    for (int i=0; i<100; i++){
        int check = number % 2; // 홀짝 확인

        switch (check){
            case 0: number = number / 2; break;
            case 1: number = 3 * number + 1; break;
        }
        // printf("%d\n", number);
    }
    printf("연산 후 값은 %d", number);

    return 0;
}