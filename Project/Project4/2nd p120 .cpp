#include <stdio.h>

int main(void)
{
	double kg;    // Ű ������ bmi�� ������ ����
	double cm;
	double bmi;

	printf("weight(kg)�� hight(cm) enter :");
	scanf_s("%lf%lf", &kg, &cm);          // kg, cm �Է�

	bmi = (kg) / (cm * cm); // bmi ���

	(bmi >= 20.0) && (bmi < 25.0) ? printf("It's the standard.\n") : printf("take care of your weight.\n"); 
	// bmi ��ġ�� 20.0�̻� 25.0�̸��̸�"It's the standard."�� ����ϰ� �׷��� ������ "take care of your weight."�� ���

	return 0;
}