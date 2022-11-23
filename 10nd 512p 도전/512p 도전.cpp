#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define NAME 50          //이름 크기
#define ST_NUM 5       //학생 수
#define SUB_NUM 3        //과목 수
#define A_CUTLINE 90     //학점 커트라인
#define B_CUTLINE 80
#define C_CUTLINE 70

struct studentscore
{
    int id;                    //학번
    char name[NAME];           //이름
    int kor, eng, math;        // 국, 영, 수
};

struct studentgrade
{
    int sum;               //합
    double avg;             //평균
    char grade;             //성적
};

int main(void)
{
    int i, j;

    struct studentscore score[ST_NUM];        //과목 점수 입력 구조체
    struct studentgrade grade[ST_NUM];        //성적 계산 구조체
    struct studentgrade temp;                 //정렬을 위한 구조체

    for (i = 0; i < ST_NUM; i++)            
    {
        printf("Student ID : ");
        scanf_s("%d", &score[i].id);
        printf("Name : ");
        scanf_s("%s", &score[i].name, NAME);
        printf("Korean, English, Math score : ");
        scanf_s("%d%d%d", &score[i].kor, &score[i].eng, &score[i].math);

        grade[i].sum = score[i].kor + score[i].eng + score[i].math;         //합산 점수 저장
        grade[i].avg = (double)grade[i].sum / SUB_NUM;                      //과목 평균 점수 저장

        if (grade[i].avg >= A_CUTLINE)                                     //평균이 A커트라인 점수 이상일 때
            grade[i].grade = 'A';                                          // 성적 A
        else if (grade[i].avg >= B_CUTLINE)
            grade[i].grade = 'B';
        else if (grade[i].avg >= C_CUTLINE)
            grade[i].grade = 'C';
        else                                                             //A, B, C 점수에 포함되지 않을 경우
            grade[i].grade = 'F';                                        // 성적 F

    }
    printf("\nData before sorting...\n");                                //정렬 전
    printf("  ID  NAME  KOR  ENG  MATH  SUM  AVG   GRADE\n");
    for (i = 0; i < ST_NUM; i++)
    {
        printf("%5d%5s%5d%5d%5d%6d%6.1lf%5c\n",
            score[i].id, score[i].name, score[i].kor, score[i].eng, score[i].math, grade[i].sum, grade[i].avg, grade[i].grade);
    }
    
    for (i = 0; i < ST_NUM; i++)                 //성적 순으로 정렬
    {
        for (j = 0; j < ST_NUM; j++)
        {
            if (grade[j].sum < grade[j+1].sum)         //오름차순 정렬
            {
                temp = grade[j];
                grade[j] = grade[j + 1];
                grade[j + 1] = temp;
            }
        }
    }
    printf("Sorted Data...\n");         //정렬 후
    printf("  ID  NAME  KOR  ENG  MATH  SUM  AVG   GRADE\n");
    for (i = 0; i < ST_NUM; i++)
    {
        printf("%5d%5s%5d%5d%5d%6d%6.1lf%5c\n",
            score[i].id, score[i].name, score[i].kor, score[i].eng, score[i].math, grade[i].sum, grade[i].avg, grade[i].grade);
    }
    return 0;
}


