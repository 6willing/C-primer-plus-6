#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int jane, tarzan, cheeta;

	cheeta = tarzan = jane = 68;
	printf("                  cheeta   tarzan     jane\n");
	printf("First round score %4d %8d %8d", cheeta, tarzan, jane);
	return 0;
}