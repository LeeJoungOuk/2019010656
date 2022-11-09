#include<stdio.h>

#define m 3           // 배열 지정

void Cramer(int(* p_a)[m], int size, int* p_c, double* p_s, double det);           //크래머식 사용을 위한 크래머 함수
double Det(int(*p_a)[m], int size, double* p_s, double det);                       // determinant를 구하기 위한 det함수

int main(void)
{
	int i, j = 0;                     //반복을 위한 변수 초기화
	int Arr[m][m] = { 0 };            //방정식 계수를 저장할 배열
	int Cns[m] = { 0 };               //방정식 상수를 저장할 배열
	double Str_1[m] = { 0 };          //계산 값을 저장할 배열
	double Str_2[m] = { 0 };
	double det = 0;                   //detA 값을 저장할 변수

	for (i = 0; i < m; i++)
	{
		printf("Input %d equation Ax + By + Cz = D\n", i + 1);       //방정식의 계수 입력
		for (j = 0; j < m; j++)
		{
			if (j == 0)
			{
				printf("A : ");
			}
			else if (j == 1)
			{
				printf("B : ");
			}
			else
			{
				printf("C : ");
			}
			
			scanf_s("%d", &Arr[i][j]);
		}
		printf("D : ");
		scanf_s("%d", &Cns[i]);                                  //방정식의 상수 입력
	}
	for (i = 0; i < m; i++)
	{
		printf("\n\t%d equation %dx + %dy + %dz = %d\n\n", i + 1, Arr[i][0], Arr[i][1], Arr[i][2], Cns[i]);     // 세 방정식 확인
	}

	Det(Arr, m, Str_1, det);         

	det = Det(Arr, m, Str_1, det);

	Cramer(Arr, m, Cns, Str_2, det);

}

double Det(int(*p_a)[m], int size, double*p_s, double det)
{
	int i = 0;

	for (i = 0; i < size; i++)
	{
		if (i == 0)
		{
			p_s[i] = *(p_a[0] + i) * ((* (p_a[1] + 1) * * (p_a[2] + 2)) - (* (p_a[1] + 2) * * (p_a[2] + 1)));       
		}
		else if (i == 1)
		{
			p_s[i] = *(p_a[0] + i) * ((*(p_a[1] + 0) * *(p_a[2] + 2)) - (*(p_a[1] + 2) * *(p_a[2] + 0)));         // 3x3 행렬의 값 구하는 공식
		}
		else
		{
			p_s[i] = *(p_a[0] + i) * ((*(p_a[1] + 0) * *(p_a[2] + 1)) - (*(p_a[1] + 1) * *(p_a[2] + 0)));
		}
	}
	det = p_s[0] - p_s[1] + p_s[2];            //detA 값 det에 저장
	return det;                              
}


void Cramer(int(* p_a)[m], int size, int*p_c, double*p_s, double det)              
{
	int i = 0;


	for (i = 0; i < size; i++)
	{
		if (i == 0)
		{
			p_s[i] = p_c[0] * ((*(p_a[1] + 1) * *(p_a[2] + 2)) - (*(p_a[1] + 2) * *(p_a[2] + 1))) 
				     - *(p_a[0] + 1) * ((p_c[1] * *(p_a[2] + 2)) - (*(p_a[1] + 2) * p_c[2]))                                //△1 값 구하기
				     + *(p_a[0] + 2) * ((p_c[1] * *(p_a[2] + 1)) - (*(p_a[1] + 1) * p_c[2]));
		}
		else if (i == 1)
		{
			p_s[i] = *(p_a[0] + 0) * ((p_c[1] * *(p_a[2] + 2)) - (*(p_a[1] + 2) * p_c[2]))
				     - p_c[0] * ((*(p_a[1] + 0) * *(p_a[2] + 2)) - (*(p_a[1] + 2) * *(p_a[2] + 0)))                        //△2 값 구하기
				     + *(p_a[0] + 2) * ((*(p_a[1] + 0) * p_c[2]) - (p_c[1] * *(p_a[2] + 0)));
		}
		else
		{
			p_s[i] = *(p_a[0] + 0) * ((*(p_a[1] + 1) * p_c[2]) - (p_c[1] * *(p_a[2] + 1)))
				   - *(p_a[0] + 1) * ((*(p_a[1] + 0) * p_c[2]) - (p_c[1] * *(p_a[2] + 0)))                                 //△3 값 구하기
				   + p_c[0] * ((*(p_a[1] + 0) * *(p_a[2] + 1)) - (*(p_a[1] + 1) * *(p_a[2] + 0)));
		}
	}
	if (det == 0)
	{
		printf("\n\tRetry input equation\n");                                                // cramer 공식 사용 조건
	}
	else if(det > 0 && det < 0)
	{
		printf("\tThree equation calculation\n");
		printf("\nx : %lf\t  y : %lf\t  z : %lf\n", p_s[0]/det, p_s[1] / det, p_s[2] / det);           
	}

}