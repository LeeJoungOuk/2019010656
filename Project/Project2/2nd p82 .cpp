
#include <stdio.h>



int main(void)

{

	char ch;                                       //���ڸ� ������ ����



	printf("Enter charaters : ");          // �Է� �ȳ� �޽���

	scanf_s("%c", &ch);                     //���� ch�� ���� �Է�

	printf("%cThe ASCII code value of the charaters is %d.", ch, ch);  // ��ȯ�ؼ� ���



	return 0;



}
