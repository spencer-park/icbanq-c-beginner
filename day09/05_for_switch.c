// collatz
#include <stdio.h>

int main(){
    int number = 100000;

    // 100ȸ�� �غ���.
    for (int i=0; i<100; i++){
        int check = number % 2; // Ȧ¦ Ȯ��

        switch (check){
            case 0: number = number / 2; break;
            case 1: number = 3 * number + 1; break;
        }
        // printf("%d\n", number);
    }
    printf("���� �� ���� %d", number);

    return 0;
}