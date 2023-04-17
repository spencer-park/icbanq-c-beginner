#include <stdio.h>

int main(){
    int array[] = {1, 2, 3, 4, 5};
    int array_length = sizeof(array)/sizeof(int);
    printf("배열의 길이 : %d\n", array_length);

    return 0;
}