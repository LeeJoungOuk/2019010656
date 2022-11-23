#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#define LINE_MAX 200

int main(void)
{
    FILE* fp;

    fp = fopen("yolo_bbox_data.txt", "r");

    char file[LINE_MAX] = { 0, };

    fread(file, 1, LINE_MAX, fp); // 전체 읽기

    printf("%s", file);


    fclose(fp);
    return 0;
}