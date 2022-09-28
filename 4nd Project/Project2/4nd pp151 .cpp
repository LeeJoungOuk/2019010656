#include<stdio.h>
int main(void)
#define Age		25             //Age를 25로 지정
#define Chestsize		95     //Chestsize를 95로 지정

{
	int nAge = Age;          //나이의 크기를 저장할 변수
	int nChest = Chestsize;  //가슴둘레의 크기를 저장할 변수
	char chSize;             //옷의 사이즈를 결정해서 저장할 변수
	if (nAge < 20)           // 나이가 20미만일 경우 11~23항 실행, 20이상일 경우 25항으로 이동
	{
		if (nChest < 85)     //가슴둘레가 85미만일 경우 S를 선택
		{
			chSize = 'S';
		}
		else if (85 <= nChest < 95) // 가슴둘레가 85이상 95미만일 경우 M을 선택
		{
			chSize = 'M';
		}
		else                     //둘다 아닐 경우 L을 선택
		{
			chSize = 'L';
		}
	}
	else
	{
		if (nChest < 90)        //가슴둘레가 90 미만일 경우 S를 선택
		{
			chSize = 'S';
		}
		else if (90 <= nChest < 100)  //가슴둘레가 90이상 100미만일 경우 M을 선택
		{
			chSize = 'M';
		}
		else             //둘다 아닐경우 L을 선택
		{
			chSize = 'L';
		}
	}
	printf("Your size is %c.\n", chSize);    //if, else if, else 문으로 결정된 size 값 출력
	return 0;
}