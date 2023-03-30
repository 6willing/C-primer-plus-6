#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define PAGE 959
int main(void)
{
	printf("*%d*\n", PAGE);
	printf("*%4d*\n", PAGE);
	printf("*%10d*\n", PAGE);
	printf("*%-10d*\n", PAGE);
	return 0;
}