#include <stdio.h>

int main()
{
    char str1[6]; // 5���� + null ����(\0)�� ���� �� �ִ� �迭
    char str2[6] = "Hello"; // ���ڿ� "Hello" �Ҵ�
    // {'H', 'e', 'l', 'l', 'o', '\0'}  ���ڿ��� �������� \0 (null)���ڸ� ǥ�����ش�.
    printf("%s\n", str2);


    // �⺻���� ��� ����� �����Ϳ� ����, �� ������ ���� ������ ����
    char str3[] = "World";
    char * ptr_str = str3; // ���ڿ� "Hello"�� ����Ű�� ������ ����
    printf("%s\n", str3);

    str3[2] = 'i';
    *(str3 + 1) = 'h';
    printf("%s\n", str3);
    return 0;
}
