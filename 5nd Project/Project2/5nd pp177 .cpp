#include<stdio.h>

#define min 2  // 2�̻��� �Ҽ� ����� ���� �ּҰ� ����

int main(void)
{
	int i;   //�ݺ�Ƚ�� ������ ���� ����
	int n;   // ���� n ���� ����
	int k = 1;  //2 �̻� n ������ �Ҽ� ������ ���� k ���� ����
	int cnt = 0; //  ī��Ʈ ����

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
