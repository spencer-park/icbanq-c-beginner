#include <stdio.h>

int main()
{
    // 파일 포인터 생성
    FILE *fp;

    // 파일 오픈
    fp = fopen("output.txt", "w");

    // 파일 오픈 실패시
    if (fp == NULL)
    {
        printf("파일을 열지 못했습니다.");
        return 1;
    }

    // 파일에 데이터를 쓰기
    fputs("Hello World!", fp);

    // 파일 닫기
    fclose(fp);

    printf("파일에 데이터를 썼습니다.");

    return 0;
}
