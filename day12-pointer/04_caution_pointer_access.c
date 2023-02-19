#include <stdio.h>

int main()
{
    int score[] = {1, 2, 3, 4, 5};
    int *ptr_score = score;

    // update
    *ptr_score = 99;
    ptr_score[1] = 89;
    *(ptr_score+2) = 79;

    // print - score
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", score[i]);
    }

    printf("\n");

 
}