/*
��� : �� 6~12��
û�ҳ� : �� 13~18��
�Ϲ� : �� 19��~
*/

#include <stdio.h>

int main(){
    int age = 2;

    if (age >= 19){
        printf("�Ϲ� ����Դϴ�.\n");
    }
    else if(age >= 13){  // age < 19 && age >= 13
        printf("û�ҳ� ����Դϴ�.\n");
    }
    else{
        printf("��� ����Դϴ�.\n");
    }
}