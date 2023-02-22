#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "apple";
    char str2[100] = "banana";

    // strcmp : Compare Strings, 길이 비교가 아님. 그러나 길이 비교도 가능
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
