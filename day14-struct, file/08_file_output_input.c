// input output 한 곳에서 파악하기
// fget, fput대신 fprintf, fscanf사용해보았다.
#include <stdio.h>

int main()
{
    FILE *fp; // 파일 포인터 선언
    char str[100];

    // 파일에 문자열 쓰기
    fp = fopen("test.txt", "w"); // 파일 열기
    fprintf(fp, "Hello World!"); // 파일에 문자열 쓰기
    fclose(fp); // 파일 닫기

    // 파일에서 문자열 읽기
    fp = fopen("test.txt", "r"); // 파일 열기
    fscanf(fp, "%s", str); // 파일에서 문자열 읽기, %[^\n]s
    fclose(fp); // 파일 닫기

    // 읽은 문자열 출력
    printf("파일에서 읽어온 데이터:  %s\n", str);

    return 0;
}
