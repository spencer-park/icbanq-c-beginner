/* 
break: 가장 가까운 반복문 종료
continue : 현재 차례를 즉시 넘겨서 다음 차례로 
*/
#include <stdio.h>

int main(){
    int total = 0;
    int count = 0;
    printf("%d\n", total);
    
    for (count = 1; count < 21; count++){
        if (count % 2 == 0){
            // 짝수일 때
            continue;
        }

        total += count;
        printf("+%d = %d\n", count, total);
    }
  
    return 0;
}