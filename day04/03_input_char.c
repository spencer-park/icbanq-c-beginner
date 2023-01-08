#include <stdio.h>

int main(){
    char chr;
    printf("문자 하나 입력 : ");
    scanf("%c", &chr);     

    printf("입력한 문자 : %c \n", chr);  
    

    // string 미리보기
    char name[30];
    printf("이름 입력 : ");
    scanf("%s", name);

    printf("당신의 이름은 %s 입니다.\n", name);
    
    return 0;
}   