// strchr(const char *_Str,int _Val): 문자열에서 특정 문자를 찾습
// strstr : Locate Substring (대상, 찾을 값)
// 실행결과를 pythontutor와 16진수 변환해서 확인해보자.
// https://pythontutor.com/visualize.html#mode=edit
// https://www.rapidtables.org/convert/number/hex-to-decimal.html

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "The giraffe painting I drew is a hedgehog painting.";
    char substr[100] = "hedgehog";

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
