#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;              // ������ �Է� ���� ����
	int* p_num;          // �Է� ���� ������ ������ �迭������
	int i, j;
	int count = 1;       //�� �ٲ��� ���� count

	printf(" Input positive number : ");

	scanf_s("%d", &num);            //���� �Է�

	p_num = (int*)malloc(num * sizeof(int));  //���� ���� ���� �Ҵ�

	if (p_num == NULL )         //�����Ҵ� Ȯ��
	{
		printf("Out of memory");
		exit(1);
	}

	for (i = 2; i < num; i++)           //2���� 29���� ����
	{
		p_num[i] = i;
	}

	for (i = 2; i < num; i++)           //2���� 29����
	{
		if (p_num[i] == 0)              
			continue;
		for (j = i + i; j < num; j+= i)   //����� �����ֱ� - �Ҽ� �Ǻ�
		{
			p_num[j] = 0;
		}
	}

	for (i = 2; i < num; i++)              //���
	{
		if (p_num[i] != 0)                 // 0�� �ƴϸ� �Ҽ��� �Ǻ��Ǿ��� ������ ���尪 ���
		{
			printf("%5d", p_num[i]);
		}
		else                              //0�̶�� �Ҽ� �Ǻ����� �������⶧���� x�� ���
		{
			printf("%5c", 'X');
		}

		if (count % 5 == 0)               //5�� ���� �ٹٲ�     
		{
			printf("\n");
		}
		count++;
	}

	free(p_num);

	return 0;
}

