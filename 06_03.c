#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//糟糕的代码创建了一个无限循环
int main(void)
{
	int n = 0;
	while (n < 3)
		printf("n is %d \n", n);//只看这一行的代码
	n++;
	printf("That's all this program does\n");
	return 0;
}