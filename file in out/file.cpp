#include <stdio.h>
#include<string.h>
#define NAME 40
#define MAX 500
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

typedef struct Information
{
	char name[NAME];
	int age;
	double weight;
	char per;	
}Information;

int main(void)
{
	Information data;
	char str[MAX];

	printf("Name : ");
	scanf("%s", &data.name);

	printf("Age : ");
	scanf(" %d", &data.age);

	printf("Weight : ");
	scanf(" %lf", &data.weight);

	printf("Personality : ");
	scanf(" %c", &data.per);


	FILE* fp = NULL;

	fp = fopen("test.txt", "w");

	if (fp == NULL)
	{
		printf("Can't open file");
		return 1;
	}
	fprintf(fp, "Name : %s\n Age : %d\n Weight : %f\n Personality : %c\n", data.name, data.age, data.weight, data.per);
	
	fclose(fp);
	
	FILE* fp;
	
	fp = fopen("C:\\Users\\user\\Documents\\GitHub\\leejeongouk\\file in out\\test", "r");

	if (fp == NULL)
	{
		printf("Can't open file");
		return 1;
	}

	char buffer[MAX] = { 0, };

	fread(buffer, 1, MAX, fp);
	printf("%s", buffer);

	fclose(fp);

	return 0;
}




