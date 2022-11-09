#include<stdio.h>

#pragma warning (disable:4996)

void input_data(int* pa, int* pb);
void swap_data(void);
void print_data(int a, int b);

int a, b = 0;

int main(void)
{
	input_data(&a, &b);                      // 변수에 정수 값 입력 함수
	swap_data();                             // 두 정수 위치 바꾸는 함수
	print_data(a, b);						//출력 함수

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
	stor = a;										//stor 에 a 값 이동
	a = b;											//a 에 b 값 이동	
 	b = stor;										//b 에 a 값 이동	
}
void print_data(int a, int b)
{
	printf("Two a whole number output : %d, %d", a, b);  // 변환 값 출력
}