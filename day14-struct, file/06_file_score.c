// 점수가 써져있는 텍스트 파일을 가져와서 읽고 평균을 내보자
#include <stdio.h>

int main()
{
    // 파일 포인터 변수 생성
    FILE * in_fp;
    FILE * out_fp;

    // 값 연산을 위한 변수
    int num, sum = 0, count = 0;
    float avg = 0.0;

    // 읽어 올 파일 포인터 생성하기 - scores.txt
     in_fp = fopen("scores.txt", "r");
     if ( in_fp == NULL) 
    {
        printf("Error opening input file\n");
        return 1;
    }

    // 내용 쓸 파일 포인터 생성하기 - average.txt
    out_fp = fopen("average.txt", "w");
    if (out_fp == NULL)
    {
        printf("Error opening output file\n");
        return 1;
    }

    // scores.txt에서 점수 정보 가져오고 합산 하기
    while (fscanf( in_fp, "%d", &num) != EOF) 
    {
        sum += num;
        count++;
        printf("%d %d %d\n", sum, num, count);
    }

    // 평균 계산하기
    avg = sum / count;

    // average.txt에 기록하기
    fprintf(out_fp, "Average = %.2f", avg);

    // 사용한 파일 포인터 close하여 파일 작업 종료하기
    fclose( in_fp);
    fclose( out_fp);

    return 0;
}
