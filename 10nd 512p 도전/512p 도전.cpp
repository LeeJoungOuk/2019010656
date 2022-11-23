#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define NAME 50          //�̸� ũ��
#define ST_NUM 5       //�л� ��
#define SUB_NUM 3        //���� ��
#define A_CUTLINE 90     //���� ĿƮ����
#define B_CUTLINE 80
#define C_CUTLINE 70

struct studentscore
{
    int id;                    //�й�
    char name[NAME];           //�̸�
    int kor, eng, math;        // ��, ��, ��
};

struct studentgrade
{
    int sum;               //��
    double avg;             //���
    char grade;             //����
};

int main(void)
{
    int i, j;

    struct studentscore score[ST_NUM];        //���� ���� �Է� ����ü
    struct studentgrade grade[ST_NUM];        //���� ��� ����ü
    struct studentgrade temp;                 //������ ���� ����ü

    for (i = 0; i < ST_NUM; i++)            
    {
        printf("Student ID : ");
        scanf_s("%d", &score[i].id);
        printf("Name : ");
        scanf_s("%s", &score[i].name, NAME);
        printf("Korean, English, Math score : ");
        scanf_s("%d%d%d", &score[i].kor, &score[i].eng, &score[i].math);

        grade[i].sum = score[i].kor + score[i].eng + score[i].math;         //�ջ� ���� ����
        grade[i].avg = (double)grade[i].sum / SUB_NUM;                      //���� ��� ���� ����

        if (grade[i].avg >= A_CUTLINE)                                     //����� AĿƮ���� ���� �̻��� ��
            grade[i].grade = 'A';                                          // ���� A
        else if (grade[i].avg >= B_CUTLINE)
            grade[i].grade = 'B';
        else if (grade[i].avg >= C_CUTLINE)
            grade[i].grade = 'C';
        else                                                             //A, B, C ������ ���Ե��� ���� ���
            grade[i].grade = 'F';                                        // ���� F

    }
    printf("\nData before sorting...\n");                                //���� ��
    printf("  ID  NAME  KOR  ENG  MATH  SUM  AVG   GRADE\n");
    for (i = 0; i < ST_NUM; i++)
    {
        printf("%5d%5s%5d%5d%5d%6d%6.1lf%5c\n",
            score[i].id, score[i].name, score[i].kor, score[i].eng, score[i].math, grade[i].sum, grade[i].avg, grade[i].grade);
    }
    
    for (i = 0; i < ST_NUM; i++)                 //���� ������ ����
    {
        for (j = 0; j < ST_NUM; j++)
        {
            if (grade[j].sum < grade[j+1].sum)         //�������� ����
            {
                temp = grade[j];
                grade[j] = grade[j + 1];
                grade[j + 1] = temp;
            }
        }
    }
    printf("Sorted Data...\n");         //���� ��
    printf("  ID  NAME  KOR  ENG  MATH  SUM  AVG   GRADE\n");
    for (i = 0; i < ST_NUM; i++)
    {
        printf("%5d%5s%5d%5d%5d%6d%6.1lf%5c\n",
            score[i].id, score[i].name, score[i].kor, score[i].eng, score[i].math, grade[i].sum, grade[i].avg, grade[i].grade);
    }
    return 0;
}


