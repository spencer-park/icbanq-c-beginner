// fgets() 함수를 사용하여 문자열을 입력받으면 공백 입력 가능
// 3번째 인자 : stdin에서 입력을 받고(우리가 입력하는 곳이 stdin임) 
// 1번째 인자 : 지정한 버퍼에 입력을 저장
// 2번째 인자 : 입력 받을 문자열의 최대 길이를 지정
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter Str: ");
    fgets(str, sizeof(str), stdin);

    printf("Input Str: %s", str);

    return 0;
}
