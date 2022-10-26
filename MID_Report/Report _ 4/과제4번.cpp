#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void Ascending(int* p_a, int Stor);    //오름차순 함수
void Descending(int* p_a, int Stor_A); //내림차순 함수

int GenRandNum(int nRange)            //무작위 정수
{
	int nRes = 0;
	int nNum = rand();
	nRes = ((int)(nNum) % 10);
	return nRes;
}

int main(void)
{
	int nRange = 0;
	int Stor_A = 0;          //자리 바꿈을 위한 변수
	int Arr[MAX] = { 0 };    //무작위 정수를 입력 받을 배열
	int i = 0;
	
	printf("Enter a single number, for generating the function related Alignment :\n");
	scanf_s("%d", &nRange);
	for (i = 0; i < MAX; i++)        //무작위 정수 입력
	{
		Arr[i] += GenRandNum(nRange);
	}
	printf("Random Array : ");
	for (i = 0; i < MAX; i++)        //무작위 수 확인
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
		for (j = 0; j < (MAX - 1) - i; j++)    //인접한 수 비교
		{
			if (p_a[j] > p_a[j + 1])          // 오름차순 정의 p_a > p_a+1 
			{
				Stor_A = p_a[j];              // 위치 변경
				p_a[j] = p_a[j + 1];
				p_a[j + 1] = Stor_A;
			}
		}
	}
	for (i = 0; i < MAX; i++)         // 오름차순 정렬
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
			if (p_a[j] < p_a[j + 1])       //내림차순 정의 p_a < p_a+1
			{
				Stor_A = p_a[j];
				p_a[j] = p_a[j + 1];
				p_a[j + 1] = Stor_A;
			}
		}
	}
	for (i = 0; i < MAX; i++)        //내림차순 정렬
	{
		printf("%d ", p_a[i]);
	}
}