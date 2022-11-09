#include<stdio.h>
#include<string.h>

#pragma warning (disable:4996)
#define MAX 80
#define COUNTWORD 3

void swap(char(*str1)[MAX], char* str2);          //자리를 바꿔 줄 함수 선언

int main(void)
{
	char str1[COUNTWORD][MAX] = { 0 };            // 문자열 입력 받을 배열 선언
	char str2[MAX] = { 0 };                       // 자리를 바꾸기 위한 배열 선언
	int i;
	printf("Input three word : \n");				
	for (i = 0; i < COUNTWORD; i++)                // 문자열 입력
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
	if (strcmp(str1[0], str1[1]) > 0)        //str1[0] 가 str1[1] 보다 아스키코드 값이 클 때
	{
		strcpy(str2, str1[0]);
		strcpy(str1[0], str1[1]);            // str1[0] 와 str1[1] 자리 바꿈 
		strcpy(str1[1], str2);
	}

	if (strcmp(str1[0], str1[2]) > 0)         //str1[0] 가 str1[2] 보다 아스키코드 값이 클 때
	{
		strcpy(str2, str1[0]);
		strcpy(str1[0], str1[2]);            // str1[0] str1[2] 자리 바꿈
		strcpy(str1[2], str2);
	}

	if (strcmp(str1[1], str1[2]) > 0)        //str1[1] 가 str1[2] 보다 아스키코드 값이 클 때
	{
		strcpy(str2, str1[1]);
		strcpy(str1[1], str1[2]);			//str1[1] str1[2] 자리 바꿈
		strcpy(str1[2], str2);
	}

}