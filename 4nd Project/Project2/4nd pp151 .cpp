#include<stdio.h>
int main(void)
#define Age		25             //Age�� 25�� ����
#define Chestsize		95     //Chestsize�� 95�� ����

{
	int nAge = Age;          //������ ũ�⸦ ������ ����
	int nChest = Chestsize;  //�����ѷ��� ũ�⸦ ������ ����
	char chSize;             //���� ����� �����ؼ� ������ ����
	if (nAge < 20)           // ���̰� 20�̸��� ��� 11~23�� ����, 20�̻��� ��� 25������ �̵�
	{
		if (nChest < 85)     //�����ѷ��� 85�̸��� ��� S�� ����
		{
			chSize = 'S';
		}
		else if (85 <= nChest < 95) // �����ѷ��� 85�̻� 95�̸��� ��� M�� ����
		{
			chSize = 'M';
		}
		else                     //�Ѵ� �ƴ� ��� L�� ����
		{
			chSize = 'L';
		}
	}
	else
	{
		if (nChest < 90)        //�����ѷ��� 90 �̸��� ��� S�� ����
		{
			chSize = 'S';
		}
		else if (90 <= nChest < 100)  //�����ѷ��� 90�̻� 100�̸��� ��� M�� ����
		{
			chSize = 'M';
		}
		else             //�Ѵ� �ƴҰ�� L�� ����
		{
			chSize = 'L';
		}
	}
	printf("Your size is %c.\n", chSize);    //if, else if, else ������ ������ size �� ���
	return 0;
}