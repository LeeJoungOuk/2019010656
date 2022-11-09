#include <stdio.h>
#include <string.h>

#pragma warning (disable:4996)
#define MAX 80
#define LENGTH 9

int main(void)
{
	char str[MAX] = { 0 };

	strcpy(str, "wine");
	strcat(str, "apple");
	strncpy(str, "peer", 1);

	str[LENGTH] = '\0';

	printf("%s, %d\n", str, (int)strlen(str));
	return 0;
}