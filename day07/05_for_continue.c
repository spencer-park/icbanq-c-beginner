/* 
break: ���� ����� �ݺ��� ����
continue : ���� ���ʸ� ��� �Ѱܼ� ���� ���ʷ� 
*/
#include <stdio.h>

int main(){
    int total = 0;
    int count = 0;
    printf("%d\n", total);
    
    for (count = 1; count < 21; count++){
        if (count % 2 == 0){
            // ¦���� ��
            continue;
        }

        total += count;
        printf("+%d = %d\n", count, total);
    }
  
    return 0;
}