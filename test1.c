#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	char a[40];
	char b[40];
	char c[40];
	int length1 = 0;
	int length2 = 0;
	int i = 0;
	printf("������Aƿ���еĶ�����");
	scanf("%s", a);
	printf("������Bƿ���еĶ�����");
	scanf("%s", b);
	printf("Aƿ���еĶ���Ϊ��%s\n",a);
	printf("Bƿ���еĶ���Ϊ��%s\n", b);
	length1 = sizeof(a) / sizeof(a[0]);
	length2 = sizeof(b) / sizeof(b[0]);
	for (i = 0; i < length1; i++) {
		c[i] = a[i];
	}
	for (i = 0; i < length2; i++) {
		a[i] = b[i];
	}
	for (i = 0; i < length1; i++) {
		b[i] = c[i];
	}
	printf("Aƿ���еĶ���Ϊ��%s\n", a);
	printf("Bƿ���еĶ���Ϊ��%s\n", b);
	return 0;
}