#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	//第三题
	double i;
	printf("请输入一个浮点数：");
	scanf("%lf", &i);
	printf("The input is %.1f or %.1e\n", i, i);
	printf("The input is %+.3f or %.3E\n", i, i);
	//第四题
	float height;
	char name[40];
	printf("请输入身高：");
	scanf("%f", &height);
	printf("请输入名字：");
	scanf("%s", name);
	printf("%s,you are %f tall", name, height);
	return 0;
}