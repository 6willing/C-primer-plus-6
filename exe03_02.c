#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	char x = 66;
	printf("%c\n", x);

	char i = '\a';
	printf("%cStartled by the sudden sound,sally shouted,\n",i);
	printf("\"By the Great Pumpkin,what was that!\"");

	double a;
	printf("请输入一个浮点数：");
	scanf_s("%lf", &a);
	printf("小数 a=%f\n", a);
	printf("指数 a=%e\n", a);
	printf("P计数 a=%a\n", a);

	int age;
	printf("请输入年龄：");
	scanf_s("%d", &age);
	const double SECOND = 3.156e7;
	printf("一共有%e\n", age * SECOND);

	double t = 0;
	const double WATERM = 3.0e-23;
	printf("请输入水的夸脱数：");
	scanf_s("%lf", &t);
	double g = t * 950.0;
	printf("水分子的数量为：%e", g*WATERM);
	return 0;
}