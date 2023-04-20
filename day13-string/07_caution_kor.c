// 한글은 UTF-8 인코딩에서 3바이트로 이루어져 있다. pythontutor로 확인
// 문자열의 인덱스를 계산할 때 한 글자당 3바이트씩 계산해야 한다. 
// 한글을 사용할 땐 배열 크기를 주의

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "내가 그린 기린 그림은 고슴도치 그림이다.";
    char substr[100] = "고슴도치";

    // strstr : Locate Substring (대상, 찾을 값)
    // str1에서 str2의 첫 번째 표시 시작 위치에 대한 포인터를 리턴
    char *result = strstr(str, substr);

    // 배열 변수와 포인터를 출력하면
    printf("%d %d\n", str, result);

    if (result) {
        printf("Substr Index : %d\n", result - str);
    } else {
        printf("Not found.\n");
    }

    return 0;
}
