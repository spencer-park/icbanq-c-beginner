// strcat : Concatenate Strings
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "Hello, ";
    char str2[100] = "world!";

    // strcat : Concatenate Strings, (���, ���� ��)
    strcat(str1, str2);

    printf("Str1 : %s\n", str1);
    printf("Str2 : %s\n", str2);

    return 0;
}
