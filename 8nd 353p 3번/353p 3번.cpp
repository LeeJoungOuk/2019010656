#include<stdio.h>
#include<string.h>

#pragma warning (disable:4996)
#define MAX 15
#define LENGH 5


int main(void)
{
	char str1[MAX] = { 0 };             //�ܾ� ���� �迭 ����
	char str2[MAX] = { 0 };             //��� �迭 ����
	char omit[MAX] = "*";               //���� ǥ�� * �迭 ����
	int len = 0;                        // ���̸� ��Ÿ���� ���� ����

	printf("Input the word\n");

	scanf("%s", str1);

	len = strlen(str1);                //str1�� ���� ���� len�� ����

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

