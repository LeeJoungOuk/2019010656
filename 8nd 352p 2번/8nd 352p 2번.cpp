#include <stdio.h>
#include <string.h>

#pragma warning (disable:4996)
#define MAX 80                            
#define LENGTH 9

int main(void)
{
	char str[MAX] = { 0 };

	strcpy(str, "wine");                    //str 에 wine 복사
	strcat(str, "apple");					//str에 apple 겹치기
	strncpy(str, "peer", 1);				//str에 peer 중 p만 복사

	str[LENGTH] = '\0';                     //널 문자 입력

	printf("%s, %d\n", str, (int)strlen(str));  // str 출력 , int 형변환 후 str 길이 값 출력
	return 0;
}