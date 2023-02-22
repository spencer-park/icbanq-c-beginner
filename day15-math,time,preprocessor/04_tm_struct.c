// tm 구조체는 C 표준 라이브러리에서 시간 정보를 저장하기 위해 사용되는 구조체. 
// tm 구조체는 다음처럼 정의되어있다. time.h 하고 Ctrl + 클릭으로 확인 가능

// tm 구조체는 time.h 헤더 파일에 선언되어 있으며, 
// struct tm 형식으로 사용할 수 있다.

// tm 구조체는 time() 함수와 함께 자주 사용되며, 
// time() 함수는 현재 시간을 초 단위로 반환하고 
// 이를 tm 구조체로 변환하여 다양한 시간 정보를 추출할 수 있다.

struct tm {
  int tm_sec;   // 초
  int tm_min;   // 분
  int tm_hour;  // 시
  int tm_mday;  // 일
  int tm_mon;   // 월
  int tm_year;  // 년도
  int tm_wday;  // 요일 (일요일 = 0, 월요일 = 1, ... , 토요일 = 6)
  int tm_yday;  // 1월 1일부터 누적된 일 수
  int tm_isdst; // 썸머타임 (DST) 활성화 여부
};
