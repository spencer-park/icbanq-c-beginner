#include <stdio.h>

int main()
{
    char str1[6]; // 5글자 + null 문자(\0)를 담을 수 있는 배열
    char str2[6] = "Hello"; // 문자열 "Hello" 할당
    // {'H', 'e', 'l', 'l', 'o', '\0'}  문자열은 마지막에 \0 (null)문자를 표시해준다.
    printf("%s\n", str2);


    // 기본적인 사용 방법은 포인터와 동일, 즉 포인터 변수 사용법도 동일
    char str3[] = "World";
    char * ptr_str = str3; // 문자열 "Hello"를 가리키는 포인터 선언
    printf("%s\n", str3);

    str3[2] = 'i';
    *(str3 + 1) = 'h';
    printf("%s\n", str3);
    return 0;
}
