#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	const int change = 60;
	int time;
	printf("������ʱ�䣺");
	scanf("%d", &time);
	while (time > 0) {
		printf("ʱ��Ϊ%dСʱ%d����\n", time / 60, time % 60);
		printf("������ʱ�䣺");
		scanf("%d", &time);
	}
	return 0;
}