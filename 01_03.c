#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	float inch;
	float cm;
	printf("������Ӣ��ֵ��");
	scanf_s("%f", &inch);
	cm = inch * 2.54;
	printf("%fת��Ϊ���׵�ֵΪ��%f", inch, cm);
	return 0;
}