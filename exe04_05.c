#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define galon 3.785
#define yl 1.609
int main(void)
{
	double miles, gas,average1, average2;
	printf("��������̣�");
	scanf("%lf", &miles);
	printf("��������������");
	scanf("%lf", &gas);
	average1 = miles / gas;
	printf("ÿ������ʻ��Ӣ������%.1f\n", average1);
	double l = gas * galon;
	double km = miles * yl;
	average2 = km / l;
	printf("ÿ����ʻ�Ĺ�������%.1f\n", average2);
	return 0;
}