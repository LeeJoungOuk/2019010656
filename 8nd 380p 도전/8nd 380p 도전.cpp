#include<stdio.h>

#pragma warning (disable:4996)

void input_data(int* pa, int* pb);
void swap_data(void);
void print_data(int a, int b);

int a, b = 0;

int main(void)
{
	input_data(&a, &b);                      // ������ ���� �� �Է� �Լ�
	swap_data();                             // �� ���� ��ġ �ٲٴ� �Լ�
	print_data(a, b);						//��� �Լ�

	return 0;
}

void input_data(int *pa, int* pb)
{
	printf("Input Two a whole number : ");      
	scanf("%d %d", pa, pb);
}
void swap_data(void)
{
	int stor = 0;                                  
	stor = a;										//stor �� a �� �̵�
	a = b;											//a �� b �� �̵�	
 	b = stor;										//b �� a �� �̵�	
}
void print_data(int a, int b)
{
	printf("Two a whole number output : %d, %d", a, b);  // ��ȯ �� ���
}