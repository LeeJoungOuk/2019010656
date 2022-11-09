#include<stdio.h>
#include<string.h>

#pragma warning (disable:4996)
#define MAX 15
#define LENGH 5

void Omit(char* str1, char* str2, char* omit, int len);

int main(void)
{
	char str1[MAX] = { 0 };             //�ܾ� ���� �迭 ����
	char str2[MAX] = { 0 };             //��� �迭 ����
	char omit[MAX] = { 0 };               //���� ǥ�� * �迭 ����
	int len = 0;						// ���̸� ��Ÿ���� ���� ����

	for (int i = 0; i < MAX; i++)
	{
		strcat(omit, "*");
	}

	printf("Input the word\n");

	scanf_s("%s", str1, MAX);

	len = strlen(str1);					//str1�� ���� ���� len�� ����

	Omit (str1, str2, omit, len);

	return 0;
}

void Omit(char* str1, char* str2, char* omit, int len)
{
	if (len <= LENGH)                  // ���� ���� ���� �� ���� ���� ���ų� �۴ٸ� ���ٸ� str2 �� str1 ����
	{
		strcpy(str2, str1);
	}
	else
	{
		strncpy(str2, str1, LENGH);           // ���� �� ���̰� ��ŭ str2�� str1 ����
		str2[5] = '\0';                      // �� ���� �Է�
		strncat(str2, omit, len - LENGH);    // ���� �� ���� ��ŭ * ���ϱ�
	}
	printf("Omitted word : %s", str2);
}

