#include<stdio.h>
#include<stdlib.h>

#define DIR 4

typedef enum { CYAN, MAGENTA, YELLOW = 5, BLACK } COLOR;    // ���� ���� ������ ����
typedef enum { UP, DOWN, LEFT, RIGHT } ARROW;               //���� ������ ����

int main(void)
{
	int c;          // Ƚ���� ���� ����
	int d;          //��� ����

	COLOR my_color = YELLOW;
	ARROW direction = UP;

	d = direction;

	for (c = CYAN; c <= BLACK; c++)         //0���� 6����
	{
		d++;                                //d����
		d = d % DIR;                        //���� ����               
		if (c == my_color)                  // yellow�� �� ����
			break;
	}

	switch (direction)
	{
	case UP:											//d�� 0�϶�
		printf("Current direction : UP");
		break;
	case DOWN:											//d�� 1�϶�
		printf("current direction : DOWN");
		break;
	case LEFT:											//d�� 2�϶�
		printf("current direction : LEFT");
		break;
	case RIGHT:											//d�� 3�϶�
		printf("current direction : RIGHT");
		break;
	}
	return 0;
}