#define _CRT_SECURE_NO_WARNINGS
#define LI_MAX 100
#include <stdio.h>

void main()
{
    FILE* fp = fopen("yolo_label_data.txt", "r");  //yolo������ r(�б�) ���� ����
    char buffer[LI_MAX] = { 0 };

    fread(buffer, 1, LI_MAX, fp); //��ü �б�
    printf("%s", buffer);

    fclose(fp); //���� ������ �ݱ�
}