#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	/*��2Ӣ��ת��ΪӢ��*/
	int feet, fathoms;
	fathoms = 2;
	feet = 6 * fathoms;
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes, I said %d feet !\n", 6 * fathoms);
	return 0;
}