#include<stdio.h>
#define PASSWORD "4827"
#define MAX 100


void input(char* p_pw, char* p_str);  //��й�ȣ �Է��ϴ� �Լ�
int check(char* p_pw, char* p_str);   //��й�ȣ�� �´��� Ȯ���ϴ� �Լ�

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
			break;                  // 1�� �ƴϸ� 34������ �̵�
		}
		else
		{
			printf("Not matched retry..\n\n");
		}
	}
	printf("Normal termination");
}

int check(char* p_pw, char* p_str)            //��й�ȣ Ȯ�� �Լ�
{
	int i = 0;                  //Ƚ���� ���� ����
	for (i = 0;; i++)
	{
		if (p_pw[i] == p_str[i])
		{
			if (p_pw[i + 1] == '\0')  // ������ �� ���ڱ��� ���� �� return 0
			{
				return 0;
			}
			continue;   //  ���� index ��
		}
		else           
		{
			return 1;      // ���� ���� �� return 1
		}
	}
}
	



