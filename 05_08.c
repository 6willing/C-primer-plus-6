#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	const int persec = 60;
	int sec, min, left;
	printf("请输入数字：");
	scanf("%d", &sec);
	while (sec > 0) {
		min = sec / persec;
		left = sec % persec;
		printf("有%d分钟，余下%d秒\n", min, left);
		printf("请输入数字：");
		scanf("%d", &sec);
	}
	printf("Done!");
	return 0;
}