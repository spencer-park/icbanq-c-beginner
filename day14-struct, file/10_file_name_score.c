#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENT 100

// 구조체 정의
struct Student
{
    char name[20];
    int kor, math, sum;
    float avg;
};

int main()
{
    // 파일 포인터 변수 생성
    FILE *in_file;
    FILE *out_file;

    // 구조체를 이용한 배열 생성
    struct Student students[MAX_STUDENT]; // 100명 배열 생성
    int num_students;  // 학생수

    // 읽어 올 파일 포인터 생성하기 - class_student.txt
    in_file = fopen("class_student.txt", "r");
    if (in_file == NULL)
    {
        printf("Error opening input file\n");
        return 1;
    }

    // 내용 쓸 파일 포인터 생성하기 - class_student_v2.txt
    out_file = fopen("class_student_v2.txt", "w");
    if (out_file == NULL)
    {
        printf("Error opening output file\n");
        return 1;
    }

    // 이름, 한국어, 수학 정보 가져오고 합산 하기
    fscanf(in_file, "%d", &num_students);
    for (int i = 0; i < num_students; i++)
    {
        fscanf(in_file, "%s %d %d", students[i].name, &students[i].kor, &students[i].math);
    }

    // 구조체 배열(학생 정보) 출력 및 합, 평균 계산 저장
    printf("Students and their scores:\n");
    for (int i = 0; i < num_students; i++)
    {
        students[i].sum = students[i].kor + students[i].math;
        students[i].avg = (students[i].kor + students[i].math) / 2;
        printf("%s >> kor:%d math:%d sum:%d avg:%.2lf \n", students[i].name, students[i].kor, students[i].math, students[i].sum, students[i].avg);
    }

    // 파일 쓰기
    for (int i = 0; i < num_students; i++)
    {
        fprintf(out_file, "%s >> kor:%d math:%d sum:%d avg:%.2lf \n", students[i].name, students[i].kor, students[i].math, students[i].sum, students[i].avg);
    }

    // 사용한 파일 포인터 close하여 파일 작업 종료하기
    fclose(in_file);
    fclose(out_file);
    
    return 0;
}