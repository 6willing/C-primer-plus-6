#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
	printf("Biggest int:%d\n", INT_MAX);
	printf("Smallest long long:%lld\n", LLONG_MIN);
	printf("One byte=%d\n", CHAR_BIT);
	printf("Largest double=%e\n", DBL_MAX);
	printf("Smallest normal float=%e\n", FLT_MIN);
	return 0;
}