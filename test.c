#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main(void)
{
	char x, y;
	x = 'A';
	y = x + 32;
	printf("%c %d %c %d ", x, x, y, y);
	system("pause");
}