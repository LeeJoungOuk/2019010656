#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;              // 정수를 입력 받을 변수
	int* p_num;          // 입력 받은 정수를 저장할 배열포인터
	int i, j;
	int count = 1;       //줄 바꿈을 위한 count

	printf(" Input positive number : ");

	scanf_s("%d", &num);            //정수 입력

	p_num = (int*)malloc(num * sizeof(int));  //정수 저장 공간 할당

	if (p_num == NULL )         //동적할당 확인
	{
		printf("Out of memory");
		exit(1);
	}

	for (i = 2; i < num; i++)           //2부터 29까지 저장
	{
		p_num[i] = i;
	}

	for (i = 2; i < num; i++)           //2부터 29까지
	{
		if (p_num[i] == 0)              
			continue;
		for (j = i + i; j < num; j+= i)   //배수를 지워주기 - 소수 판별
		{
			p_num[j] = 0;
		}
	}

	for (i = 2; i < num; i++)              //출력
	{
		if (p_num[i] != 0)                 // 0이 아니면 소수로 판별되었기 때문에 저장값 출력
		{
			printf("%5d", p_num[i]);
		}
		else                              //0이라면 소수 판별에서 지워졌기때문에 x를 출력
		{
			printf("%5c", 'X');
		}

		if (count % 5 == 0)               //5개 마다 줄바꿈     
		{
			printf("\n");
		}
		count++;
	}

	free(p_num);

	return 0;
}

