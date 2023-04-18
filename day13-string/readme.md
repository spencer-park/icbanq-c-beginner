

---
## 문자열(string) 입력 함수
scanf와 fgets를 알아두자.

## fgets(변수, 입력 데이터 최대 사이즈, 입력받는 곳)
`char *fgets (char *string, int n, FILE *stream);`
다음 시간인 파일을 할 때도 등장한다.
오늘 3번째 인자로 넣어줄 `stdin`은 `standard input에 대한 포인터`으로
일반적으로 우리는 터미널에서의 입력을 '표준 입력'으로 두며
장치 또는 시스템에 따라 표준 입력 장치는 다를 수 있다.

`int scanf(const char *format-string, argument-list);`
와는 인자를 입력하는 방식이 다르다.