// strchr(const char *_Str,int _Val): ���ڿ����� Ư�� ���ڸ� ã��
// strstr : Locate Substring (���, ã�� ��)
// �������� pythontutor�� 16���� ��ȯ�ؼ� Ȯ���غ���.
// https://pythontutor.com/visualize.html#mode=edit
// https://www.rapidtables.org/convert/number/hex-to-decimal.html

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "The giraffe painting I drew is a hedgehog painting.";
    char substr[100] = "hedgehog";

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
