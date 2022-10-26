#include <stdio.h>
#include <stdlib.h>

#define m 3
#define n 3

int GenRandNum(int nRange)      //������ ����
{
	int nRes = 0;
	int nNum = rand();
	nRes = ((int)(nNum) % 10);  //10���� ���� ������ ��
	return nRes;
}

int main(void)
{
	int nRange = 0;
	int i, j, k = 0;          
	int Arr_A[m][n] = { 0 };    //[m][n]�� 2�� �迭
	int Arr_B[n][m] = { 0 };    //[n][m]�� 2�� �迭
	int Arr_C[m][m];            //�� ����� ���� ������ ����

	printf("Enter a single number, for generating the function related Multiplication :\n");
	scanf_s("%d", &nRange);


	for (i = 0; i < m; i++)     //�� �迭�� ������ ���� �Է�
	{
		for (j = 0; j < n; j++)
		{
			Arr_A[i][j] += GenRandNum(nRange);          
			Arr_B[i][j] += GenRandNum(nRange);
		}
	}

	for (i = 0; i < m; i++)         //�� �迭�� ��
	{
		for (j = 0; j < m; j++)
		{
			Arr_C[i][j] = 0;
			for (k = 0; k < n; k++)
			{
				Arr_C[i][j] += Arr_A[i][k] * Arr_B[k][j];     //�࿭�� ��
			}
			printf("The multiplication of two matrices : %d\n", Arr_C[i][j]);
		}
	}
	
	return 0;
}
			