// �ѱ��� UTF-8 ���ڵ����� 3����Ʈ�� �̷���� �ִ�. pythontutor�� Ȯ��
// ���ڿ��� �ε����� ����� �� �� ���ڴ� 3����Ʈ�� ����ؾ� �Ѵ�. 
// �ѱ��� ����� �� �迭 ũ�⸦ ����

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "���� �׸� �⸰ �׸��� ����ġ �׸��̴�.";
    char substr[100] = "����ġ";

    // strstr : Locate Substring (���, ã�� ��)
    // str1���� str2�� ù ��° ǥ�� ���� ��ġ�� ���� �����͸� ����
    char *result = strstr(str, substr);

    // �迭 ������ �����͸� ����ϸ�
    printf("%d %d\n", str, result);

    if (result) {
        printf("Substr Index : %d\n", result - str);
    } else {
        printf("Not found.\n");
    }

    return 0;
}
