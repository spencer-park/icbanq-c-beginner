#include <stdio.h>

int main() {
    int num;

    printf("Enter Number(1~100) : ");
    scanf("%d", &num);

    if (num > 50) {
        printf("number > 50\n");
    } else {
        printf("number <= 50\n");
    }

    return 0;
}
