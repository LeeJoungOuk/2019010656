#include <stdio.h>
#include <stdlib.h>
#include <math.h>          

#define MAX 10                   // �迭 �ִ밪

int GenRandNum(int nRange)       //������ ����
{
	int nRes = 0;
	int nNum = rand();
	nRes = ((int)(nNum) % 10);    // 10���� ������ �� ������
	return nRes;
}



int main(void)
{
	int nRange = 0;             
	int i = 0;           // Ƚ���� �ݺ��� ���� ����
	char nStor[MAX] = { 0 };               //������ ������ ������ ���� ����
	int sum = 0;                           //����� ���ϱ� ���� ��
	double average, st_deviation, variance = 0;      //���, �л�, ǥ�������� ������ ����
	
	
	printf("Enter a single number, for generating the function related average, variance , and standard deiviation  :\n");
	scanf_s("%d", &nRange);

	if (nRange <= 0)         // �迭�� ũ�Ⱑ ������ ���� ������ ����, 0�� �ǹ̰� ������ ����ó�� 
	{
		printf("Please try again\n");
	}
	else
	{
		for (i = 0; i < MAX; i++)
		{
			int nRes = GenRandNum(nRange);
			nStor[i] += nRes;                    //������ ���� += �Է�
		}

		for (i = 0; i < MAX; i++)
		{
			sum = sum + nStor[i];             //��հ��� ���ϱ� ���� �ջ�

			average = (double)sum / MAX;      //sum�� ������ȯ

			variance = variance + (nStor[i] - average) * (nStor[i] - average);  // �� �׸� ���� ��� ���� ���� ����
		}
		variance = variance / MAX;   //�ջ�� ���� index���� ������ �л� ���ϱ�

		st_deviation = sqrt(variance);     //ǥ�� ���� ���ϱ�

		printf("Average : %.3lf, Variance : %.3lf, Standard Deviation : %.3lf\n", average, variance, st_deviation);
	}
	system("pause");

	return 0;
	
	
}