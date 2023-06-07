#include <stdio.h>

int main() {
    printf("File: %s\n", __FILE__);
    printf("Line: %d\n", __LINE__);
    printf("Compile Date: %s\n", __DATE__);
    printf("Compile Time: %s\n", __TIME__);
    return 0;
}
