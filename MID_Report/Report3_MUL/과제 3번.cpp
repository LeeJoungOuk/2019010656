#include <stdio.h>
#include <stdlib.h>

#define m 3
#define n 3

int GenRandNum(int nRange)      //무작위 정수
{
	int nRes = 0;
	int nNum = rand();
	nRes = ((int)(nNum) % 10);  //10으로 나눈 나머지 값
	return nRes;
}

int main(void)
{
	int nRange = 0;
	int i, j, k = 0;          
	int Arr_A[m][n] = { 0 };    //[m][n]인 2차 배열
	int Arr_B[n][m] = { 0 };    //[n][m]인 2차 배열
	int Arr_C[m][m];            //두 행렬의 곱을 저장할 변수

	printf("Enter a single number, for generating the function related Multiplication :\n");
	scanf_s("%d", &nRange);


	for (i = 0; i < m; i++)     //두 배열에 무작위 정수 입력
	{
		for (j = 0; j < n; j++)
		{
			Arr_A[i][j] += GenRandNum(nRange);          
			Arr_B[i][j] += GenRandNum(nRange);
		}
	}

	for (i = 0; i < m; i++)         //두 배열의 곱
	{
		for (j = 0; j < m; j++)
		{
			Arr_C[i][j] = 0;
			for (k = 0; k < n; k++)
			{
				Arr_C[i][j] += Arr_A[i][k] * Arr_B[k][j];     //행열의 곱
			}
			printf("The multiplication of two matrices : %d\n", Arr_C[i][j]);
		}
	}
	
	return 0;
}
			