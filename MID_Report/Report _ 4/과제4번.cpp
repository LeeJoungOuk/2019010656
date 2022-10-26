#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void Ascending(int* p_a, int Stor);    //�������� �Լ�
void Descending(int* p_a, int Stor_A); //�������� �Լ�

int GenRandNum(int nRange)            //������ ����
{
	int nRes = 0;
	int nNum = rand();
	nRes = ((int)(nNum) % 10);
	return nRes;
}

int main(void)
{
	int nRange = 0;
	int Stor_A = 0;          //�ڸ� �ٲ��� ���� ����
	int Arr[MAX] = { 0 };    //������ ������ �Է� ���� �迭
	int i = 0;
	
	printf("Enter a single number, for generating the function related Alignment :\n");
	scanf_s("%d", &nRange);
	for (i = 0; i < MAX; i++)        //������ ���� �Է�
	{
		Arr[i] += GenRandNum(nRange);
	}
	printf("Random Array : ");
	for (i = 0; i < MAX; i++)        //������ �� Ȯ��
	{
		printf("%d ", Arr[i]);
	}
	Ascending( Arr, Stor_A);
	Descending( Arr, Stor_A);

	return 0;
}

void Ascending(int* p_a, int Stor_A)
{
	int i, j = 0;
	printf("Ascending order : ");
	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < (MAX - 1) - i; j++)    //������ �� ��
		{
			if (p_a[j] > p_a[j + 1])          // �������� ���� p_a > p_a+1 
			{
				Stor_A = p_a[j];              // ��ġ ����
				p_a[j] = p_a[j + 1];
				p_a[j + 1] = Stor_A;
			}
		}
	}
	for (i = 0; i < MAX; i++)         // �������� ����
	{
		printf("%d ", p_a[i]);
	}
}
void Descending(int* p_a, int Stor_A)
{
	int i, j = 0;
	printf("Descending order : ");
	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < (MAX - 1) - i; j++)
		{
			if (p_a[j] < p_a[j + 1])       //�������� ���� p_a < p_a+1
			{
				Stor_A = p_a[j];
				p_a[j] = p_a[j + 1];
				p_a[j + 1] = Stor_A;
			}
		}
	}
	for (i = 0; i < MAX; i++)        //�������� ����
	{
		printf("%d ", p_a[i]);
	}
}