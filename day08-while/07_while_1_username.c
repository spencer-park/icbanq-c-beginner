// ��� ��ȣ �Է�
#include <stdio.h>
#include <string.h>

int main(){
    char username[20] = "";

    // �ּ� ���� ���� 4�� �̻�
    while (1){
        if (strlen(username) > 4){
            break;
        }
        printf("Enter Username : ");
        scanf("%s", username);
    }
    printf("ID : %s\n", username);

    return 0;
}