// time() 함수를 사용하여 현재 시간을 가져옴
// time.h에 정의된 구조체 time_t를 이용해서 now 변수 생성. 
// ctime() 함수를 사용하여 현재 시간을 인쇄
// ctime() 함수는 time_t 값을 문자열 표현으로 변환한다.

// time_t는 C 언어에서 시간 값을 저장하는 데이터 형식 중 하나
// 정수형으로 표현된 Unix Epoch 시간을 나타냄
// Unix Epoch은 1970년 1월 1일 00시 00분 00초를 기준으로 경과한 시간을 초(second) 단위로 표현한 값

#include <stdio.h>
#include <time.h>

int main() {
    time_t now = time(NULL);
    printf("현 시간: %s", ctime(&now));
    return 0;
}


