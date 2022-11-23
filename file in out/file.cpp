#include <stdio.h>
#include<string.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)

#define NAME 40
#define MAX 200


int main(void)
{
	int age = 0;                 //정수
	double weight = 0;			//실수
	char per = 0;				//문자
	char name[NAME] = { 0 };	//문자열
	char str[MAX] = { 0 };		//출력을 위한 배열

	printf("Name : ");        
	gets_s(name, NAME);

	printf("Age : ");
	scanf("%d", &age);

	printf("Weight : ");
	getchar();                 //개행문자 제거
	scanf("%lf", &weight);

	printf("MBTI : ");
	getchar();
	scanf("%c", &per);


	FILE* fp = NULL;

	fp = fopen("C:\\Users\\user\\Documents\\GitHub\\leejeongouk\\file in out\\test.txt", "w");    //쓰기형으로 파일 열기

	if (fp == NULL)
	{
		printf("Can't open file");     //file = 0일때 파일 오픈 실패.
		return 1;
	}
	
	fprintf(fp, "Name : %s\nAge : %d\nWeight : %.2lf\nMBTI : %c\n", name, age, weight, per);   //파일에 입력한 정보 프린트
	
	fclose(fp);    //닫기

	fp = fopen("C:\\Users\\user\\Documents\\GitHub\\leejeongouk\\file in out\\test.txt", "r");    //r(읽기)형으로 파일 열기

	printf("\nFile Loading..\n"); 

	while (fgets(str, MAX, fp) != NULL)     // 파일 일기 중 개행문자 제거
	{
		if (str[MAX - 1] == '\n')
		{
			str[MAX - 1] = '\0';
		}
		printf("%s", str);
	}

	fclose(fp);

	return 0;
}