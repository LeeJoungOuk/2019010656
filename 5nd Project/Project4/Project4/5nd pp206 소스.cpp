#include<stdio.h>

int rec_func(int n);        

int main(void)
{
	int n;                     //�Է��� ���� ����
	printf("Input number :\n");          //Input number ǥ��
	scanf_s("%d", &n);                   
	printf("Result : %d", rec_func(n));  // ����� ǥ��
	return 0;
}
int rec_func(int n)  //���� ���ϴ� ����Լ�
{
	int sum;   // n������ ���� ������ ���� ����
	if (n == 1) return 1;     // n�� 1�̸� ��ȯ�ϰ� ������
	sum = n + rec_func(n - 1);

	return sum;      //���� ��ȯ
}