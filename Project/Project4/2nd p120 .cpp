#include <stdio.h>

int main(void)
{
	double kg;    // 키 몸무게 bmi를 저장할 변수
	double cm;
	double bmi;

	printf("weight(kg)와 hight(cm) enter :");
	scanf_s("%lf%lf", &kg, &cm);          // kg, cm 입력

	bmi = (kg) / (cm * cm); // bmi 계산

	(bmi >= 20.0) && (bmi < 25.0) ? printf("It's the standard.\n") : printf("take care of your weight.\n"); 
	// bmi 수치가 20.0이상 25.0미만이면"It's the standard."를 출력하고 그렇지 않으면 "take care of your weight."를 출력

	return 0;
}