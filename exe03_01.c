#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	/*�ض�*/
	int i = 10000000000;
	float x = 5.1e10;
	float y = 0.02e-10;
	printf("%d\n", i);
	printf("%f\n", x);
	printf("%f\n", y);
	return 0;
}