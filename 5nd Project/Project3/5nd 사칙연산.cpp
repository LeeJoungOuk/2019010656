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
    int A, B;  //���� ����
    char oper;  // �����ȣ�� ������ ���� ����
    int res;  //��� ���� ������ ����

    printf("Input your arithemtic operation:\n");
    scanf_s("%d%c%d", &A, &oper, 1, &B);     // ���� a,b�� �� �Է�, 1�� ���� oper�� ũ��

    switch (oper)  //oper�� ��ȣ�� �������� Ȯ��
    {
    case '+':         //oper�� +�̸�
    {
        printf("Sum : ");
        int res = sum(A, B);  //A + B�� ����
        printf("%d%c%d=%d", A, oper, B, res);
        break;
    }
    case '-':         //oper�� -�̸�
    {
        printf("Minus : ");
        int res = min(A, B);  //A - B�� ����
        printf("%d%c%d=%d", A, oper, B, res);
        break;
    }
    case '*':         //oper�� *�̸� 
    {
        printf("Multiplication : ");
        int res = mul(A, B);  //A * B�� ����
        printf("%d%c%d=%d", A, oper, B, res);
        break;
    }
    case '/':         //oper�� /�̸�
    {
        printf("Divison : ");
        int res = div(A, B);  //A / B�� ����
        printf("%d%c%d=%d", A, oper, B, res);
        break;
    }
    default:
    {
        printf("Remaining Operation : ");
        int res = rem(A, B);  //A % B�� ����
        printf("%d%c%d=%d", A, oper, B, res);
        break;
    }
    }

    return 0;
}