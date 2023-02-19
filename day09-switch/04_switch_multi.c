#include <stdio.h>

int main(){
    int day;

    // 계산기 코드
    printf("0~6을 입력하세요(0 : 일요일) : ");
    scanf("%d", &day);

    // switch문
    switch(day){
        case 0:
        case 1:
            printf("하체 운동\n");
            break;
        case 2:
        case 3:
            printf("상체 운동\n");
            break;
        case 4:
            printf("휴식도 운동이다\n");
            break;
        case 5:
        case 6:
            printf("전신 운동\n");
            break;
        default:
            printf("입력 범위를 넘었습니다.\n");
    }

    return 0;
}