#include <stdio.h>
#include <string.h>

#pragma warning (disable:4996)
#define MAX 80                            
#define LENGTH 9

int main(void)
{
	char str[MAX] = { 0 };

	strcpy(str, "wine");                    //str �� wine ����
	strcat(str, "apple");					//str�� apple ��ġ��
	strncpy(str, "peer", 1);				//str�� peer �� p�� ����

	str[LENGTH] = '\0';                     //�� ���� �Է�

	printf("%s, %d\n", str, (int)strlen(str));  // str ��� , int ����ȯ �� str ���� �� ���
	return 0;
}