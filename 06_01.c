#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	int judge;
	printf("����������:");
	judge = scanf("%ld", &num);
	while (judge == 1) {
		sum += num;
		printf("����������:");
		judge = scanf("%ld", &num);
	}
	printf("���ǵĺ�Ϊ%d", sum);
	return 0;
}