#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	char x = 66;
	printf("%c\n", x);

	char i = '\a';
	printf("%cStartled by the sudden sound,sally shouted,\n",i);
	printf("\"By the Great Pumpkin,what was that!\"");

	double a;
	printf("������һ����������");
	scanf_s("%lf", &a);
	printf("С�� a=%f\n", a);
	printf("ָ�� a=%e\n", a);
	printf("P���� a=%a\n", a);

	int age;
	printf("���������䣺");
	scanf_s("%d", &age);
	const double SECOND = 3.156e7;
	printf("һ����%e\n", age * SECOND);

	double t = 0;
	const double WATERM = 3.0e-23;
	printf("������ˮ�Ŀ�������");
	scanf_s("%lf", &t);
	double g = t * 950.0;
	printf("ˮ���ӵ�����Ϊ��%e", g*WATERM);
	return 0;
}