#include<stdio.h>
#define Chestsize	95 //chestsize 95로 지정

int main(void)
{
	int nChest = Chestsize;  // 가슴둘레의 크기를 저장할 변수
	char chSize;     // 옷의 사이즈를 결정해서 저장할 변수
	if (nChest <= 90)  //가슴둘레가 90보다 작거나 같으면 size는 S 선택
	{
		chSize = 'S';
	}
	else if (90 < nChest <= 100)
	{
		chSize = 'M';   // 가슴둘레가 90보다 크고 100보다 작거나 같으면 size는 M 선택
	}
	else
	{
		chSize = 'L';
	}

	printf("size is % c.\n", chSize);   //if, else if, else 문으로 결정된 size 값 출력

	return 0;
}