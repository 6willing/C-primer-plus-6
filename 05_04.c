#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int i = 1;
	while (i < 21) {
		printf("%2d��ƽ��Ϊ%4d\n", i, i * i);
		i++;
	}
	return 0;
}