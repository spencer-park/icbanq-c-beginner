#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Input String: ");
    scanf("%s", str);

    // ���� ���
    int len = strlen(str);
    printf("Input str : %s\n", str);
    printf("Length str : %d\n", len);

    return 0;
}
