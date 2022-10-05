#include<stdio.h>

int main(void)
{
	int i, j;                               // 구구단 변수 지정
	printf("multiplication table: "); 
	scanf_s("%d", &i);                      //구구단 입력
	for (j = 1; j <= 9; j++)                // j가 1부터9까지 증가하면서 수행
		printf("%d * %d = %d\n", i, j, i * j);  //곱셈 출력문
	}
	return 0;
}
