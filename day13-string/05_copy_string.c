#include <stdio.h>
#include <string.h>

int main()
{
    char src[100] = "Hello, world!";
    char copy[100];

    // strcpy = Copy Strings, strcpy(복사될 곳, 복사할 값);
    strcpy(copy, src);
    printf("Original : %s\n", src);
    printf("Copied : %s\n", copy);

    return 0;
}
