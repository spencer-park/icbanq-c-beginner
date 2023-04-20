// memcpy�� day11 �迭���� �غ��Ҵ�.
// memset(�����Ҹ޸��ּ�, �ʱ�ȭ�� ��, �ʱ�ȭ�� �޸� ũ��)
// ���޵� �޸��� ��� ����Ʈ�� ������ ������ �ʱ�ȭ�մϴ�.

#include <stdio.h>
#include <string.h>

int main()
{
    int arr[5];
    memset(arr, 0, sizeof(arr)); // arr �迭�� ��� ��Ҹ� 0���� �ʱ�ȭ
    // memset(arr, 1, sizeof(arr)); // 16843009�� ����, unsigned char�� ����ȯ -> 1 -> 0x01 -> 00000001 -> 10���� ��ȯ�� 16843009
    // ��� �� memset() �Լ��� ����ؼ� �迭�� 1�� �ʱ�ȭ�ϴ� ����� ����. 
    // for�� �ʱ�ȭ �ϴ� ���� �Ϲ���
    // for (int i = 0; i < 5; i++) {
    //     arr[i] = 1; // ��� ��Ҹ� 1�� ����
    // }


    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // 0 0 0 0 0 ���
    }
    printf("\n");

    return 0;
}
