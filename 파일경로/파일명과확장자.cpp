#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS 1
#define LINE_MAX 100

#include <stdio.h>
#include <string.h>

int main()
{
    char path[LINE_MAX] = "c:\\Document\\Github\\Test1\\test.txt";
    char fname[LINE_MAX];
    char ext[LINE_MAX];
    char* ptr = NULL;      //ptr �ʱ�ȭ


    printf("File Path : %s\n", path);
    ptr = strrchr(path, '\\');     //���ڿ�(path)�� �ڿ������� '\'�� ��ġ�� �˻��Ͽ� ��ȯ

    if (ptr == NULL)
        strcpy(fname, path);
    else
        strcpy(fname, ptr + 1); // �����Ϳ� +1�� �� �� �����̸��� ����

    printf("\nFile Name : %s\n", fname);

    ptr = NULL;

    ptr = strchr(fname, '.');         //���ڿ�(fname)���� '.' ������ ��ġ �˻��Ͽ� ��ȯ
    strcpy(ext, ptr + 1);             //�����Ϳ� +1�� �� �� Ȯ���ڸ� ����
    printf("Extension : %s\n", ext);


    return 0;
}