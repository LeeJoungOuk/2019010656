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
    char* ptr = NULL;      //ptr 초기화


    printf("File Path : %s\n", path);
    ptr = strrchr(path, '\\');     //문자열(path)의 뒤에서부터 '\'의 위치를 검색하여 반환

    if (ptr == NULL)
        strcpy(fname, path);
    else
        strcpy(fname, ptr + 1); // 포인터에 +1을 한 후 파일이름만 추출

    printf("\nFile Name : %s\n", fname);

    ptr = NULL;

    ptr = strchr(fname, '.');         //문자열(fname)에서 '.' 나오는 위치 검색하여 반환
    strcpy(ext, ptr + 1);             //포인터에 +1을 한 후 확장자만 추출
    printf("Extension : %s\n", ext);


    return 0;
}