#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS 1
#define LINE_MAX 100

#include <stdio.h>
#include <string.h>

int main()
{
    char path1[LINE_MAX] = "c:\\Document\\Github\\Test1\\test.txt";
    char path2[LINE_MAX] = { 0 };
    char fname1[LINE_MAX]= { 0 };
    char fname2[LINE_MAX] = { 0 };
    char* ptr = NULL;      //ptr �ʱ�ȭ
    char* ptr2 = NULL;      //ptr �ʱ�ȭ

    FILE* fp;
    fp = fopen("c:\\Document\\Github\\Test1\\test.txt", "w");

    printf("File Path : %s\n", path1);
   ptr = strrchr(path1, '\\');     //���ڿ�(path)�� �ڿ������� '\'�� ��ġ�� �˻��Ͽ� ��ȯ

    if (ptr == NULL)
        strcpy(fname1, path1);
    else
        strcpy(fname1, ptr + 1); // �����Ϳ� +1�� �� �� �����̸��� ����

    printf("\nFile Name : %s\nEnter a new file name\n", fname1);
    scanf_s("%s", fname2, LINE_MAX);

    if (rename(fname1, fname2) == 0)
    {
        ptr2 = strcpy(path2, path1);
        printf("%s", ptr2);
    }
    else
    {
        printf("\nFail\n");
    }

    fclose(fp);

    return 0;
}