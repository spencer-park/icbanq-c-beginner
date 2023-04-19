#include <stdio.h>

int main()
{
    int array[3] = {1, 10, 100};
    int *pArr = array; 

    array[2] = 999;
    printf("%d\n", array[2]);

    *(pArr + 2) = 888;
    printf("%d\n", *(pArr + 2));
    printf("%d\n", array[2]);


    return 0;
}