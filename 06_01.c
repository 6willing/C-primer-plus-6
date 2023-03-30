#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	int judge;
	printf("请输入数字:");
	judge = scanf("%ld", &num);
	while (judge == 1) {
		sum += num;
		printf("请输入数字:");
		judge = scanf("%ld", &num);
	}
	printf("它们的和为%d", sum);
	return 0;
}