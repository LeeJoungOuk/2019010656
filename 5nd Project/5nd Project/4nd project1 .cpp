#include<stdio.h>

int main(void)
{
	int i, j;                               // ������ ���� ����
	printf("multiplication table: "); 
	scanf_s("%d", &i);                      //������ �Է�
	for (j = 1; j <= 9; j++)                // j�� 1����9���� �����ϸ鼭 ����
		printf("%d * %d = %d\n", i, j, i * j);  //���� ��¹�
	}
	return 0;
}
