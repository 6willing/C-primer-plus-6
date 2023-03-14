#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	float inch;
	float cm;
	printf("请输入英尺值：");
	scanf_s("%f", &inch);
	cm = inch * 2.54;
	printf("%f转换为厘米的值为：%f", inch, cm);
	return 0;
}