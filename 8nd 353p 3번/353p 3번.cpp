#include<stdio.h>
#include<string.h>

#pragma warning (disable:4996)
#define MAX 15
#define LENGH 5


int main(void)
{
	char str1[MAX] = { 0 };             //단어 저장 배열 선언
	char str2[MAX] = { 0 };             //출력 배열 선언
	char omit[MAX] = "*";               //생략 표현 * 배열 선언
	int len = 0;                        // 길이를 나타내는 변수 선언

	printf("Input the word\n");

	scanf("%s", str1);

	len = strlen(str1);                //str1의 길이 값을 len에 저장

	if (len <= LENGH)                  // 길이 값이 정의 된 길이 값과 같거나 작다면 같다면 str2 에 str1 복사
	{
		strcpy(str2, str1);
	}
	else
	{
		strncpy(str2, str1, LENGH);           // 정의 된 길이값 만큼 str2에 str1 복사
		str2[5] = '\0';                      // 널 문자 입력
		strncat(str2, omit, len - LENGH);    // 생략 된 문자 만큼 * 더하기
	}
	printf("Omitted word : %s", str2);
}

