// ��� ��ȣ �Է�
#include <stdio.h>
#include <string.h>

int main(){
    char username[20] = "";

    printf("Enter username : ");
    scanf("%s", username);

    // strlen -> ���� ��, ����(String Length)
    int result = strlen(username);
    printf("strlen(username) = %d", result);

    return 0;
}