#include<stdio.h>
#include<stdlib.h>

typedef struct train Train;

struct train   
{
	int seats;    //���� �¼� ��
	Train* next;  // ���� ���� ���� ������
};

int main(void)
{
	Train* head = NULL, * tail = NULL;       // ����ü �ʱ�ȭ
	int i;
	for (i = 0; i < 5; i++)      //���� ���� �ڵ�
	{
		if (head == NULL)
		{
			head = tail = (train*)malloc(sizeof(Train));     
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));      
			tail = tail->next;
		}
	}
	return 0;
}