#include <stdio.h>

int main(){
    int n = 3;

    switch(n){
        case 1:case 2:case 3:
            printf("1~3�� �� �����ڵ�\n");
            break;
        default:
            printf("�⺻ �����ڵ�\n");
    }

    if (n < 4 && n >= 1 ){
        printf("1~3�� �� �����ڵ�\n");
    }else{
        printf("�⺻ �����ڵ�\n");
    }

    return 0;
}