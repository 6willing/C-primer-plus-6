#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	//������
	double i;
	printf("������һ����������");
	scanf("%lf", &i);
	printf("The input is %.1f or %.1e\n", i, i);
	printf("The input is %+.3f or %.3E\n", i, i);
	//������
	float height;
	char name[40];
	printf("��������ߣ�");
	scanf("%f", &height);
	printf("���������֣�");
	scanf("%s", name);
	printf("%s,you are %f tall", name, height);
	return 0;
}