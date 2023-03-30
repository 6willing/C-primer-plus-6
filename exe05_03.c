#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define perweek 7
int main(void)
{
	int days;
	printf("请输入天数：");
	scanf("%d", &days);
	while (days > 0) {
		printf("%d days are %d week,%d days\n", days, days / perweek, days % perweek);
		printf("请输入天数：");
		scanf("%d", &days);
	}
	return 0;
}