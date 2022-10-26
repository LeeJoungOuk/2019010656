#include<stdio.h>
#define PASSWORD "4827"
#define MAX 100


void input(char* p_pw, char* p_str);  //비밀번호 입력하는 함수
int check(char* p_pw, char* p_str);   //비밀번호가 맞는지 확인하는 함수

int main(void)
{
	char chPassword[MAX] = { PASSWORD };
	char chStr[MAX];
	input(chPassword, chStr);
	check(chPassword, chStr);

	return 0;
}

void input(char* p_pw, char* p_str)
{
	while(1)
	{
		printf("Please input your password : \n");
		scanf_s("%s", p_str, MAX);
		if (check(p_pw, p_str) != 1)
		{
			break;                  // 1이 아니면 34행으로 이동
		}
		else
		{
			printf("Not matched retry..\n\n");
		}
	}
	printf("Normal termination");
}

int check(char* p_pw, char* p_str)            //비밀번호 확인 함수
{
	int i = 0;                  //횟수를 위한 변수
	for (i = 0;; i++)
	{
		if (p_pw[i] == p_str[i])
		{
			if (p_pw[i + 1] == '\0')  // 마지막 널 문자까지 왔을 때 return 0
			{
				return 0;
			}
			continue;   //  다음 index 비교
		}
		else           
		{
			return 1;      // 같지 않을 시 return 1
		}
	}
}
	



