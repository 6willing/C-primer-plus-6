#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <float.h>
int main(void)
{
	double i = 1.0 / 3.0;
	float i1 = 1.0 / 3.0f;
	printf("float i=%f\n", i1);
	printf("float i=%.12f\n", i1);
	printf("float i=%.16f\n", i1);
	printf("double i=%.12f\n", i);
	printf("long double i=%.16f\n", i);
	printf("%d\n", FLT_DIG);
	printf("%d\n", DBL_DIG);
	return 0;
}