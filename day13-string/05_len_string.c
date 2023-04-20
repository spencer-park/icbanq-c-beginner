// 한글 입력 바이트 크기 파악하기
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Input String: ");
    // scanf("%s", str);
    fgets(str, sizeof(str), stdin);

    // 길이 계산
    int len = strlen(str);
    printf("Input str : %s\n", str);
    printf("Length str : %d\n", len);

    return 0;
}
