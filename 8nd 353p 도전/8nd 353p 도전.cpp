#include<stdio.h>
#include<string.h>

#pragma warning (disable:4996)
#define MAX 80
#define COUNTWORD 3

void swap(char* str1, char* str2);

int main(void)
{
	char str1[COUNTWORD][MAX] = { 0 };
	char str2[MAX] = { 0 };
	int i, j = 0;
	printf("Input your three word : \n");
	
	for (i = 0; i < COUNTWORD; i++)
	{
		scanf("%c", str1[i][MAX]);
	}

	for (i = 0; i < COUNTWORD; i++)
	{
		gets_s(str1[i], COUNTWORD);
	}

	swap(str1[COUNTWORD], str2);
}

void swap(char* str1, char* str2)
{
	int i, j = 0;
	for (i = 0; i < COUNTWORD; i++)
	{
		for (j = 0; j < COUNTWORD - 1; j++)
		{
			if (str1[j] > str1[j + 1])
			{
				str2[0] = str1[j];
				str1[j] = str1[j + 1];
				str1[j + 1] = str2[0];
			}
		}
	}
	for (i = 0; i < COUNTWORD; i++)
	{
		printf("%c ", str1[i]);
	}
}
	