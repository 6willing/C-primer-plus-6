#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h> //�ṩstrlen()������ԭ��
#define DENSITY 62.4 //�����ܶ�
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40]; //������40���ַ�������
	printf("Hi!What's your first name?\n");
	scanf("%s", name);
	printf("%s,What your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also,your first name has %d letters.\n", letters);
	printf("and we have %d bytes to store it.\n",size);
	return 0;
}