#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	float weight, value;//定义重量和价值
	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("please enter your weight in pounds:");

	scanf_s("%f", &weight);//获取重量

	value = 1700.0 * weight * 14.5833;
	printf("Your weigt in platinum is worth ＄%.2f .\n", value);
	printf("You are easily worth that! If platinum prices drop.\n");
	printf("eat more to maintain your value.\n");
	return 0;
}