#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*��ʾ�������*/
int main(void)
{
	float a, b;
	b = 2.0e20+1;
	a = b - 2.0e20;//floatֻ�ܴ洢��ָ�������Ŵ����С��6��7λ��Ч����
	printf("%f\n", a);
	return 0;
}