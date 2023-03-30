#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	const int change = 60;
	int time;
	printf("请输入时间：");
	scanf("%d", &time);
	while (time > 0) {
		printf("时间为%d小时%d分钟\n", time / 60, time % 60);
		printf("请输入时间：");
		scanf("%d", &time);
	}
	return 0;
}