#include<stdio.h>

struct snack
{
	int price;               //과자의 가격
	int calories;            //과자의 칼로리
};

int main(void)
{
	struct snack basasak;         //바사삭 과자 구조체

	printf("Enter the price and calories of Basasak : ");    //바사삭의 칼로리와 가격 입력
	scanf_s("%d%d", &basasak.price, &basasak.calories);
	
	printf("Price of Basasak : %dwon\n", basasak.price);         //입력받은 가격과 칼로리 출력
	printf("Calories of Basasak : %dkcal\n", basasak.calories);
	
	return 0;
}