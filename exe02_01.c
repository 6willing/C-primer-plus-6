#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void deny(void);
void br(void);
void ic(void);

int main(void)
{
	printf("Gustav Mahler\n");
	printf("Gustav\n");
	printf("Mahler\n");
	printf("Gustav Mahler\n");
	printf("Liu willing dongguan");

	int age = 0;
	printf("请输入年龄：");
	scanf_s("%d", &age);
	int days = age * 365;
	printf("你的年龄为：\"%d\",天数为：\"%d\"\n", age, days);

	deny();
	deny();
	deny();
	printf("Which nobody can deny\n");
	
	printf("Brazil,Russia,India,China\n");
	br();
	ic();
	return 0;
}

void deny(void)
{
	printf("For he's a jolly good fellow!\n");
}

void br(void)
{
	printf("Brazil,Russia\n");
}

void ic(void)
{
	printf("India,China\n");
}