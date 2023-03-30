#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
double lf(double a);
int main(void)
{
	double number;
	double lifang;
	printf("请输入数字：");
	scanf("%lf", &number);
	lifang = lf(number);
	printf("%f的立方为%f", number, lifang);

	//int days;
	//int i;
	//int money = 0;
	//printf("请输入天数：");
	//scanf("%d", &days);
	//for (i = 1; i <= days; i++) {
	//	money += i*i;
	//}
	//printf("%d天赚了%d元", days, money);
	return 0;
}

double lf(double a)
{
	double total = a * a * a;
	return total;
}