#include<stdio.h>
#include<stdlib.h>

#define DIR 4

typedef enum { CYAN, MAGENTA, YELLOW = 5, BLACK } COLOR;    // 색에 관한 열거형 선언
typedef enum { UP, DOWN, LEFT, RIGHT } ARROW;               //방향 열거형 선언

int main(void)
{
	int c;          // 횟수를 위한 변수
	int d;          //계산 변수

	COLOR my_color = YELLOW;
	ARROW direction = UP;

	d = direction;

	for (c = CYAN; c <= BLACK; c++)         //0부터 6까지
	{
		d++;                                //d증가
		d = d % DIR;                        //방향 결정               
		if (c == my_color)                  // yellow일 때 방향
			break;
	}

	switch (direction)
	{
	case UP:											//d가 0일때
		printf("Current direction : UP");
		break;
	case DOWN:											//d가 1일때
		printf("current direction : DOWN");
		break;
	case LEFT:											//d가 2일때
		printf("current direction : LEFT");
		break;
	case RIGHT:											//d가 3일때
		printf("current direction : RIGHT");
		break;
	}
	return 0;
}