#include<stdio.h>

#define NAME 40

struct marriage      //결혼 정보 구조체 설정
{
	char name[NAME];          //이름
	int age;               //나이
	char sex;				//성별
	double height;			//키
};

int main(void)
{
	struct marriage m1 = { "Andy", 22, 'm', 187.5 };     // 값 입력
	struct marriage* mp = &m1;

	printf("Name : %s\n", mp->name);          //포인터로 접근
	printf("Age : %d\n", mp->age);
	printf("Sex : %c\n", mp->sex);
	printf("Height : %.1lf", mp->height);

	return 0;
}