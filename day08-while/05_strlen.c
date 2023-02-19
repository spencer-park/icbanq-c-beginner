// 비밀 번호 입력
#include <stdio.h>
#include <string.h>

int main(){
    char username[20] = "";

    printf("Enter username : ");
    scanf("%s", username);

    // strlen -> 글자 수, 길이(String Length)
    int result = strlen(username);
    printf("strlen(username) = %d", result);

    return 0;
}