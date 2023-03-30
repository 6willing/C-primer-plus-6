#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define galon 3.785
#define yl 1.609
int main(void)
{
	double miles, gas,average1, average2;
	printf("请输入里程：");
	scanf("%lf", &miles);
	printf("请输入汽油量：");
	scanf("%lf", &gas);
	average1 = miles / gas;
	printf("每加仑行驶的英里数：%.1f\n", average1);
	double l = gas * galon;
	double km = miles * yl;
	average2 = km / l;
	printf("每升行驶的公里数：%.1f\n", average2);
	return 0;
}