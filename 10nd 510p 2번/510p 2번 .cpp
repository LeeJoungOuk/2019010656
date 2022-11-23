#include<stdio.h>
#include<stdlib.h>

typedef struct train Train;

struct train   
{
	int seats;    //객차 좌석 수
	Train* next;  // 다음 객차 연결 포인터
};

int main(void)
{
	Train* head = NULL, * tail = NULL;       // 구조체 초기화
	int i;
	for (i = 0; i < 5; i++)      //객차 연결 코드
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