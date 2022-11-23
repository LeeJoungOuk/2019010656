#define _CRT_SECURE_NO_WARNINGS
#define LI_MAX 100
#include <stdio.h>

void main()
{
    FILE* fp = fopen("yolo_label_data.txt", "r");  //yolo파일을 r(읽기) 모드로 열기
    char buffer[LI_MAX] = { 0 };

    fread(buffer, 1, LI_MAX, fp); //전체 읽기
    printf("%s", buffer);

    fclose(fp); //파일 포인터 닫기
}