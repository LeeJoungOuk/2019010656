#include<stdio.h>

#define NAME 80                  

struct book                     // 책에 관한 구조체 설정
{
	char title[NAME];
	char author[NAME];
	int page;
	int price;
};

void book_information(int num);         // 책 정보에 대한 함수

int main(void)
{
	int num = 0;           // 알고 싶은 책 정보 선택을 위한 변수
	
	printf("Enter the number of information - 1, 2, 3\n");     // 1-3까지 원하는 숫자 입력
	scanf_s("%d", &num);

	book_information(num);

	return 0;
}

void book_information(int num)
{
	struct book information1;
	struct book information2;
	struct book information3;

	information1 = { "Hotel Story", "Kyungseon Lim", 212, 13500 };    //1번 책에 대한 정보
	information2 = { "Contradiction","Guija Yang", 308, 11700 };      //2번 책에 대한 정보
	information3 = { "Almond", "Wonpyeong Son", 264, 10800 };         //3번 책에 대한 정보

	switch (num)
	{
	case 1:                                                       //1번을 입력 받았을 경우
		printf("Title : %s\n", information1.title);
		printf("Author : %s\n", information1.author);
		printf("Page : %d\n", information1.page);
		printf("Price : %d\n", information1.price);
		break;
	case 2:														//2번을 입력 받았을 경우
		printf("Title : %s\n", information2.title);
		printf("Author : %s\n", information2.author);
		printf("Page : %d\n", information2.page);
		printf("Price : %d\n", information2.price);
		break;
	case 3:													//3번을 입력 받았을 경우
		printf("Title : %s\n", information3.title);
		printf("Author : %s\n", information3.author);
		printf("Page : %d\n", information3.page);
		printf("Price : %d\n", information3.price);
		break;
	default:                                                  //그 외에 숫자를 입력했을 경우 다시 시도
		printf("Please retry again");
	}
}