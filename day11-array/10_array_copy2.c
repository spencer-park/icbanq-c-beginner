// �迭 ���� ���2 - memcpy �Լ��� �̿�
// string.h ���̺귯���� ���ǵ� �Լ���, �޸� ������ �����ϴ� �Լ�
// �迭�� ũ�⳪ ������ ����� ������ ������� ��� ����
#include <stdio.h>
#include <string.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    
    memcpy(arr2, arr1, sizeof(arr1));

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
