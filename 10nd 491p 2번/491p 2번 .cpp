#include<stdio.h>

struct snack
{
	int price;               //������ ����
	int calories;            //������ Į�θ�
};

int main(void)
{
	struct snack basasak;         //�ٻ�� ���� ����ü

	printf("Enter the price and calories of Basasak : ");    //�ٻ���� Į�θ��� ���� �Է�
	scanf_s("%d%d", &basasak.price, &basasak.calories);
	
	printf("Price of Basasak : %dwon\n", basasak.price);         //�Է¹��� ���ݰ� Į�θ� ���
	printf("Calories of Basasak : %dkcal\n", basasak.calories);
	
	return 0;
}