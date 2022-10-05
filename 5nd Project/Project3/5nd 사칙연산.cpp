#include<stdio.h>

int sum(int x, int y);
int min(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int rem(int x, int y);

int sum(int x, int y)
{
    int temp;

    temp = x + y;

    return temp;
}
int min(int x, int y)
{
    int temp;

    temp = x - y;

    return temp;
}
int mul(int x, int y)
{
    int temp;

    temp = x * y;

    return temp;
}
int div(int x, int y)
{
    int temp;

    temp = x / y;

    return temp;
}
int rem(int x, int y)
{
    int temp;

    temp = x % y;

    return temp;
}
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
    {
        printf("Sum : ");
        int res = sum(A, B);  //A + B를 수행
        printf("%d%c%d=%d", A, oper, B, res);
        break;
    }
    case '-':         //oper가 -이면
    {
        printf("Minus : ");
        int res = min(A, B);  //A - B를 수행
        printf("%d%c%d=%d", A, oper, B, res);
        break;
    }
    case '*':         //oper가 *이면 
    {
        printf("Multiplication : ");
        int res = mul(A, B);  //A * B를 수행
        printf("%d%c%d=%d", A, oper, B, res);
        break;
    }
    case '/':         //oper가 /이면
    {
        printf("Divison : ");
        int res = div(A, B);  //A / B를 수행
        printf("%d%c%d=%d", A, oper, B, res);
        break;
    }
    default:
    {
        printf("Remaining Operation : ");
        int res = rem(A, B);  //A % B를 수행
        printf("%d%c%d=%d", A, oper, B, res);
        break;
    }
    }

    return 0;
}