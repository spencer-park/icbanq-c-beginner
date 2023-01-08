#include <stdio.h>

int main(){
    int age;
    printf("당신의 나이는? : ");
    scanf("%d", &age);  // 입력받는 데이터의 포맷코드, 저장할 변수의 주소값

    // 계산
    int birth = 2023 - age;
    printf("출생년도는 %d인가요?\n", birth);

    // &변수는 무엇일까?
    printf("%p", &age); // %p 포인터의 주소를 출력

    return 0;
}