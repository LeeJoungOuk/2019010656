#include<stdio.h>

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
		res = A + B;  //A + B�� ����
		break;
	case '-':         //oper�� -�̸�
		res = A - B;  //A - B�� ����
		break;
	case '*':         //oper�� *�̸� 
		res = A * B;  //A * B�� ����
		break;
	case '/':         //oper�� /�̸�
		res = A / B;  //A / B�� ����
		break;
	}
	printf("%d%c%d=%d\n", A, oper, B, res);

	return 0;
}