#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	typedef double love;
	int n = 0;
	love i = 2.22;
	size_t intsize;
	intsize = sizeof(int);
	printf("n = %d, n has % zd byte all ints have % zd bytes.\n", n, sizeof(n), intsize);
	printf("love i =%f", i);
	return 0;
}