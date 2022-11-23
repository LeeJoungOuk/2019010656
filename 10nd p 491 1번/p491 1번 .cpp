#include<stdio.h>

#define NAME 80                  

struct book                     // å�� ���� ����ü ����
{
	char title[NAME];
	char author[NAME];
	int page;
	int price;
};

void book_information(int num);         // å ������ ���� �Լ�

int main(void)
{
	int num = 0;           // �˰� ���� å ���� ������ ���� ����
	
	printf("Enter the number of information - 1, 2, 3\n");     // 1-3���� ���ϴ� ���� �Է�
	scanf_s("%d", &num);

	book_information(num);

	return 0;
}

void book_information(int num)
{
	struct book information1;
	struct book information2;
	struct book information3;

	information1 = { "Hotel Story", "Kyungseon Lim", 212, 13500 };    //1�� å�� ���� ����
	information2 = { "Contradiction","Guija Yang", 308, 11700 };      //2�� å�� ���� ����
	information3 = { "Almond", "Wonpyeong Son", 264, 10800 };         //3�� å�� ���� ����

	switch (num)
	{
	case 1:                                                       //1���� �Է� �޾��� ���
		printf("Title : %s\n", information1.title);
		printf("Author : %s\n", information1.author);
		printf("Page : %d\n", information1.page);
		printf("Price : %d\n", information1.price);
		break;
	case 2:														//2���� �Է� �޾��� ���
		printf("Title : %s\n", information2.title);
		printf("Author : %s\n", information2.author);
		printf("Page : %d\n", information2.page);
		printf("Price : %d\n", information2.price);
		break;
	case 3:													//3���� �Է� �޾��� ���
		printf("Title : %s\n", information3.title);
		printf("Author : %s\n", information3.author);
		printf("Page : %d\n", information3.page);
		printf("Price : %d\n", information3.price);
		break;
	default:                                                  //�� �ܿ� ���ڸ� �Է����� ��� �ٽ� �õ�
		printf("Please retry again");
	}
}