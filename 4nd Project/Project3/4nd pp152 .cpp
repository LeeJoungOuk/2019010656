#include<stdio.h>

int main(void)
{
	int A, B;  //변수 선언
	char oper;  // 연산기호를 저장할 변수 선언
	int res;  //결과 값을 지정할 변수

	printf("Input your arithemtic operation:\n");
	scanf_s("%d%c%d", &A, &oper, 1, &B);     // 변수 a,b에 값 입력, 1은 변수 oper의 크기

	switch (oper)  //oper의 기호가 무엇인지 확인
	{
	case '+':         //oper가 +이면
		res = A + B;  //A + B를 수행
		break;
	case '-':         //oper가 -이면
		res = A - B;  //A - B를 수행
		break;
	case '*':         //oper가 *이면 
		res = A * B;  //A * B를 수행
		break;
	case '/':         //oper가 /이면
		res = A / B;  //A / B를 수행
		break;
	}
	printf("%d%c%d=%d\n", A, oper, B, res);

	return 0;
}