#include<stdio.h>

int rec_func(int n);        

int main(void)
{
	int n;                     //입력할 변수 선언
	printf("Input number :\n");          //Input number 표출
	scanf_s("%d", &n);                   
	printf("Result : %d", rec_func(n));  // 결과값 표출
	return 0;
}
int rec_func(int n)  //합을 구하는 재귀함수
{
	int sum;   // n까지의 합을 누적할 변수 선언
	if (n == 1) return 1;     // n이 1이면 반환하고 끝낸다
	sum = n + rec_func(n - 1);

	return sum;      //변수 변환
}