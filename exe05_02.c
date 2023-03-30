#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int x,i;
	printf("请输入一个数字：");
	scanf("%d", &x);
	for (i=x; i <= x + 10; i++) {
		printf("%d	", i);
	}
	return 0;
}