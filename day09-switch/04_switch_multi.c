#include <stdio.h>

int main(){
    int day;

    // ���� �ڵ�
    printf("0~6�� �Է��ϼ���(0 : �Ͽ���) : ");
    scanf("%d", &day);

    // switch��
    switch(day){
        case 0:
        case 1:
            printf("��ü �\n");
            break;
        case 2:
        case 3:
            printf("��ü �\n");
            break;
        case 4:
            printf("�޽ĵ� ��̴�\n");
            break;
        case 5:
        case 6:
            printf("���� �\n");
            break;
        default:
            printf("�Է� ������ �Ѿ����ϴ�.\n");
    }

    return 0;
}