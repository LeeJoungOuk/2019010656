#include<stdio.h>

#define min 2  // 2이상의 소수 출력을 위해 최소값 설정

int main(void)
{
	int i;   //반복횟수 저장을 위한 변수
	int n;   // 정수 n 변수 지정
	int k = 1;  //2 이상 n 이하의 소수 나열을 위한 k 변수 지정
	int cnt = 0; //  카운트 정수

	printf("Input an integer greater than or equal to 2 : ");
	scanf_s("%d", &n);

	for (i = min; i <= n; i++)
	{
		for (k = min; k <= i; k++) 
		{
			if (i % k == 0)
			{
				if (i > k) break;

				else
				{
					printf("%5d", i);
					cnt++;
					if ((cnt % 5) == 0)
					{
						printf("\n");
					}
				}
			}
		}
	}
	return 0;

}
