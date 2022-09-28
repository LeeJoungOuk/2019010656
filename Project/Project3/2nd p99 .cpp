#include<stdio.h>

int main(void)

{

	int kor = 3, eng = 5, mat = 4;     // 국, 영, 수 학점 초기화

	int credits;             // 전 학점 저장할 변수

	int res;                   // 결과 저장 변수

	double kscore = 3.8, escore = 4.4, mscore = 3.9; // 각 과목 학점 초기화

	double grade; // 학점 평균 저장할 변수



	credits = kor + eng + mat;  // 학점 계산

	grade = (kscore + escore + mscore) / 3;  // 학점 평균 계산

	res = (credits >= 10) && (grade > 4.0); //전제 학점이 10학점 이상이고, 평점이 4.0보다 크면 참이므로 결과는 1, 그렇지 않으면 거짓으로 결과는 0

	printf("%d\n", res);

	return 0;
}
