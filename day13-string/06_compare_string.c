#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "apple";
    char str2[100] = "banana";

    // strcmp : Compare Strings, ���� �񱳰� �ƴ�. �׷��� ���� �񱳵� ����
    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Eqaul.\n");
    } else if (result < 0) {
        printf("str1 less than str2.\n");
    } else {
        printf("str1 greater than str2.\n");
    }

    return 0;
}
