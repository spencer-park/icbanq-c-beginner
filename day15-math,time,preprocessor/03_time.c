// time 함수는 time_t 타입의 값인 현재 시간 정보를 반환
// 이 값은 지역 시간대로 표시된다. 
// localtime 함수는 time_t 값을 지역 시간대의 struct tm 구조체로 변환한다. 
// 그 다음, strftime 함수를 사용하여 시간 정보를 원하는 형식으로 출력한다.

// strftime 함수에서 
// 1번째 인자는 문자열 버퍼
// 2번째 인자는 버퍼의 크기
// 3번째 인자는 출력할 시간 형식을 나타내는 문자열
// 현재는 "YYYY-MM-DD HH:MM:SS" 형식으로 출력

#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *local_time = localtime(&t);
    char time_str[128];

    strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", local_time);
    printf("현재 시간: %s\n", time_str);

    return 0;
}

// time(NULL)에서 NULL은 왜 넣는가?
// C의 time 함수는 인자로 시간 정보를 담을 구조체 포인터를 받는다. 
// 이 구조체 포인터를 NULL로 지정하면 현재 시간 정보를 얻을 수 있다.
// 즉, time(NULL)은 현재 시간을 초 단위로 반환하는 것.

// time 함수의 프로토타입은 다음과 같습니다.
// time_t time(time_t *timer);
// 여기서 time_t *timer 인자가 구조체 포인터이며, 
// 현재 시간 정보를 담기 위한 용도로 사용된다. 
// time(NULL)을 호출할 경우에는 구조체 포인터가 필요 없기 때문에 NULL 값을 전달하는 것.