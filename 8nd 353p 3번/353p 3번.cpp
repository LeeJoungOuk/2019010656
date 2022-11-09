#include<stdio.h>
#include<string.h>

#pragma warning (disable:4996)
#define MAX 15
#define LENGH 5


int main(void)
{
	char str1[MAX] = { 0 };
	char str2[MAX] = { 0 };
	char omit[MAX] = "*";
	int len = 0;

	printf("Input the word\n");

	scanf("%s", str1);

	len = strlen(str1);

	if (len <= LENGH)
	{
		strcpy(str2, str1);
	}
	else
	{
		strncpy(str2, str1, 5);
		str2[5] = '\0';
		strncat(str2, omit, len - LENGH);
	}
	printf("Omitted word : %s", str2);
}

