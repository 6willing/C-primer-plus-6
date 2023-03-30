#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int n = 0;
	while (n++ < 3); //注意分号的位置
	printf("n is %d\n", n);
	printf("That's all this program does.\n");
	return 0;
}