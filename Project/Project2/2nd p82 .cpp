
#include <stdio.h>



int main(void)

{

	char ch;                                       //문자를 저장할 변수



	printf("Enter charaters : ");          // 입력 안내 메시지

	scanf_s("%c", &ch);                     //변수 ch에 문자 입력

	printf("%cThe ASCII code value of the charaters is %d.", ch, ch);  // 변환해서 출력



	return 0;



}
