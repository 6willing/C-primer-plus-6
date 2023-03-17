#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*演示舍入错误*/
int main(void)
{
	float a, b;
	b = 2.0e20+1;
	a = b - 2.0e20;//float只能存储按指数比例放大或缩小的6或7位有效数字
	printf("%f\n", a);
	return 0;
}