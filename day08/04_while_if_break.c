// 04_for_if_break.c¿Í ºñ±³
#include <stdio.h>

int main(){
    int goal = 75;
    int input = 0;
    int count = 0;

    while (1){
        count++;
        
        printf("Enter Number : ");
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