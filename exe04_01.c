#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	char name[40];
	int width;
	printf("�������ȣ�");
	scanf("%d", &width);
	printf("������������");
	scanf("%s", name);
	printf("�������Ϊ��\"%s\"\n", name);
	printf("�������Ϊ��\"%20s\"\n", name);
	printf("�������Ϊ��\"%-20s\"\n", name);
	printf("�������Ϊ��\"%*s\"\n",(width+3), name);
	return 0;
}