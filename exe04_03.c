#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main(void)
{
	//������
	//float mb;
	//float time;
	//printf("�������ļ���С��");
	//scanf("%f", &mb);
	//time = mb / 1.00;
	//printf("����ʱ��Ϊ��%.2f", time);

	//������
	char name[40];
	char surname[40];
	int weight1;
	int weight2;
	printf("���������֣�");
	scanf("%s", name);
	printf("�������գ�");
	scanf("%s", surname);
	weight1 = strlen(name);
	weight2 = strlen(surname);
	printf("%s %s\n", name, surname);
	printf("%*d %*d\n",weight1, weight1,weight2, weight2);
	printf("%s %s\n", name, surname);
	printf("%-*d %-*d\n", weight1, weight1, weight2, weight2);
	return 0;
}