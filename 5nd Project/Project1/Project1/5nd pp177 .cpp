#include<stdio.h>

int main(void)
{
	int A, B;
	char oper;  
	int res;  

	printf("Input your arithemtic operation:\n");
	scanf_s("%d%c%d", &A, &oper, 1, &B);     

	switch (oper)  
	{
	case '+':         
		res = A + B; 
		break;
	case '-':         
		res = A - B;  
		break;
	case '*':         
		res = A * B;  
		break;
	case '/':         
		res = A / B; 
		break;
	}
	printf("%d%c%d=%d\n", A, oper, B, res);

	return 0;
}