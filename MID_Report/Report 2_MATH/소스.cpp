#include <stdio.h>
#include <stdlib.h>
#include <math.h>          

#define MAX 10                   // 배열 최대값

int GenRandNum(int nRange)       //무작위 정수
{
	int nRes = 0;
	int nNum = rand();
	nRes = ((int)(nNum) % 10);    // 10으로 나눴을 때 나머지
	return nRes;
}



int main(void)
{
	int nRange = 0;             
	int i = 0;           // 횟수를 반복할 변수 지정
	char nStor[MAX] = { 0 };               //무작위 정수를 저장할 변수 지정
	int sum = 0;                           //평균을 구하기 위한 합
	double average, st_deviation, variance = 0;      //평균, 분산, 표준편차를 지정할 변수
	
	
	printf("Enter a single number, for generating the function related average, variance , and standard deiviation  :\n");
	scanf_s("%d", &nRange);

	if (nRange <= 0)         // 배열의 크기가 음수일 수는 없으니 예외, 0도 의미가 없으니 예외처리 
	{
		printf("Please try again\n");
	}
	else
	{
		for (i = 0; i < MAX; i++)
		{
			int nRes = GenRandNum(nRange);
			nStor[i] += nRes;                    //무작위 정수 += 입력
		}

		for (i = 0; i < MAX; i++)
		{
			sum = sum + nStor[i];             //평균값을 구하기 위해 합산

			average = (double)sum / MAX;      //sum의 단위변환

			variance = variance + (nStor[i] - average) * (nStor[i] - average);  // 각 항목 값에 평균 값을 빼고 제곱
		}
		variance = variance / MAX;   //합산된 값을 index수로 나눠서 분산 구하기

		st_deviation = sqrt(variance);     //표준 편차 구하기

		printf("Average : %.3lf, Variance : %.3lf, Standard Deviation : %.3lf\n", average, variance, st_deviation);
	}
	system("pause");

	return 0;
	
	
}