#include<stdio.h>

#define NAME 40

struct marriage      //��ȥ ���� ����ü ����
{
	char name[NAME];          //�̸�
	int age;               //����
	char sex;				//����
	double height;			//Ű
};

int main(void)
{
	struct marriage m1 = { "Andy", 22, 'm', 187.5 };     // �� �Է�
	struct marriage* mp = &m1;

	printf("Name : %s\n", mp->name);          //�����ͷ� ����
	printf("Age : %d\n", mp->age);
	printf("Sex : %c\n", mp->sex);
	printf("Height : %.1lf", mp->height);

	return 0;
}