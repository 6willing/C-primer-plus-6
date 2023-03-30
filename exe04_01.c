#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	char name[40];
	int width;
	printf("请输入宽度：");
	scanf("%d", &width);
	printf("请输入姓名：");
	scanf("%s", name);
	printf("你的姓名为：\"%s\"\n", name);
	printf("你的姓名为：\"%20s\"\n", name);
	printf("你的姓名为：\"%-20s\"\n", name);
	printf("你的姓名为：\"%*s\"\n",(width+3), name);
	return 0;
}