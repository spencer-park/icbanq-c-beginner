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
    // fscanf(fp, "%s", data); 
    fscanf(fp, "%[^\n]s", data);   
    /*
    읽어올 데이터가 공백을 포함하는 문자열이라면, 
    %s 대신 %[^\n]s와 같은 형식
    개행 문자(\n)을 제외한 모든 문자를 문자열로 읽습니다.
    http://port70.net/~nsz/c/c11/n1570.html#7.21.6.2
    */ 

    // 파일 닫기
    fclose(fp);

    // 읽어온 데이터 출력
    printf("파일에서 읽어온 데이터: %s", data);

    return 0;
}
