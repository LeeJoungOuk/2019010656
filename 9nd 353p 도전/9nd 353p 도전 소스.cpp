#include<stdio.h>
#include<string.h>

#pragma warning (disable:4996)
#define MAX 80
#define COUNTWORD 3

void swap(char(*str1)[MAX], char* str2);          //�ڸ��� �ٲ� �� �Լ� ����

int main(void)
{
	char str1[COUNTWORD][MAX] = { 0 };            // ���ڿ� �Է� ���� �迭 ����
	char str2[MAX] = { 0 };                       // �ڸ��� �ٲٱ� ���� �迭 ����
	int i;
	printf("Input three word : \n");				
	for (i = 0; i < COUNTWORD; i++)                // ���ڿ� �Է�
	{
		scanf_s("%s", str1[i], MAX);
	}

	swap(str1, str2); 
	printf("In order Dictionary Output : ");
	for (i = 0; i < COUNTWORD; i++)               
	{
		printf("%s, ", str1[i]);
	}
}
void swap(char(*str1)[MAX], char* str2)
{
	if (strcmp(str1[0], str1[1]) > 0)        //str1[0] �� str1[1] ���� �ƽ�Ű�ڵ� ���� Ŭ ��
	{
		strcpy(str2, str1[0]);
		strcpy(str1[0], str1[1]);            // str1[0] �� str1[1] �ڸ� �ٲ� 
		strcpy(str1[1], str2);
	}

	if (strcmp(str1[0], str1[2]) > 0)         //str1[0] �� str1[2] ���� �ƽ�Ű�ڵ� ���� Ŭ ��
	{
		strcpy(str2, str1[0]);
		strcpy(str1[0], str1[2]);            // str1[0] str1[2] �ڸ� �ٲ�
		strcpy(str1[2], str2);
	}

	if (strcmp(str1[1], str1[2]) > 0)        //str1[1] �� str1[2] ���� �ƽ�Ű�ڵ� ���� Ŭ ��
	{
		strcpy(str2, str1[1]);
		strcpy(str1[1], str1[2]);			//str1[1] str1[2] �ڸ� �ٲ�
		strcpy(str1[2], str2);
	}

}