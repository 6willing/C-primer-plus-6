#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int n, n2, n3;
	n = 5;
	n2 = n * n;
	n3 = n * n * n;
	printf("n=%d,n squared=%d,n cubed=%d", n, n2, n3);
	return 0;
}