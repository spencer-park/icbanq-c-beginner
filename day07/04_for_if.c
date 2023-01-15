#include <stdio.h>

int main(){
    int goal = 75;
    int input = 0;
    int count = 0;

    for (count = 1; count < 21; count++){
        scanf("%d", &input);
        if (input > goal){
            printf("Down\n");
        }
        else if (input < goal){
            printf("Up\n");
        }
        else{
            printf("Correct\n");
            break;
        }
    }
    printf("Try Count : %d\n", count);

    return 0;
}