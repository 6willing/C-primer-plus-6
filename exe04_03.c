#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main(void)
{
	//第五题
	//float mb;
	//float time;
	//printf("请输入文件大小：");
	//scanf("%f", &mb);
	//time = mb / 1.00;
	//printf("下载时间为：%.2f", time);

	//第六题
	char name[40];
	char surname[40];
	int weight1;
	int weight2;
	printf("请输入名字：");
	scanf("%s", name);
	printf("请输入姓：");
	scanf("%s", surname);
	weight1 = strlen(name);
	weight2 = strlen(surname);
	printf("%s %s\n", name, surname);
	printf("%*d %*d\n",weight1, weight1,weight2, weight2);
	printf("%s %s\n", name, surname);
	printf("%-*d %-*d\n", weight1, weight1, weight2, weight2);
	return 0;
}