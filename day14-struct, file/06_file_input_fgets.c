#include <stdio.h>

int main()
{
    // 파일 포인터 생성
    FILE *fp;

    // 파일 오픈
    fp = fopen("output.txt", "r");

    // 파일 오픈 실패시
    if (fp == NULL)
    {
        printf("파일을 열지 못했습니다.");
        return 1;
    }

    // 파일에서 데이터를 읽어옴
    char data[100];
    fgets(data, 100, fp);

    // 파일 닫기
    fclose(fp);

    // 읽어온 데이터 출력
    printf("파일에서 읽어온 데이터: %s", data);

    return 0;
}
