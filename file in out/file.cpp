#include <stdio.h>
#include<string.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)

#define NAME 40
#define MAX 200


int main(void)
{
	int age = 0;                 //����
	double weight = 0;			//�Ǽ�
	char per = 0;				//����
	char name[NAME] = { 0 };	//���ڿ�
	char str[MAX] = { 0 };		//����� ���� �迭

	printf("Name : ");        
	gets_s(name, NAME);

	printf("Age : ");
	scanf("%d", &age);

	printf("Weight : ");
	getchar();                 //���๮�� ����
	scanf("%lf", &weight);

	printf("MBTI : ");
	getchar();
	scanf("%c", &per);


	FILE* fp = NULL;

	fp = fopen("C:\\Users\\user\\Documents\\GitHub\\leejeongouk\\file in out\\test.txt", "w");    //���������� ���� ����

	if (fp == NULL)
	{
		printf("Can't open file");     //file = 0�϶� ���� ���� ����.
		return 1;
	}
	
	fprintf(fp, "Name : %s\nAge : %d\nWeight : %.2lf\nMBTI : %c\n", name, age, weight, per);   //���Ͽ� �Է��� ���� ����Ʈ
	
	fclose(fp);    //�ݱ�

	fp = fopen("C:\\Users\\user\\Documents\\GitHub\\leejeongouk\\file in out\\test.txt", "r");    //r(�б�)������ ���� ����

	printf("\nFile Loading..\n"); 

	while (fgets(str, MAX, fp) != NULL)     // ���� �ϱ� �� ���๮�� ����
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