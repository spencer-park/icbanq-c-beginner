// 비밀 번호 입력
#include <stdio.h>
#include <string.h>

int main(){
    char username[20] = "";

    // 최소 글자 제한 4자 이상
    while (strlen(username) < 4){
        printf("Enter Username : ");
        scanf("%s", username);
    }
    printf("ID : %s\n", username);

    return 0;
}