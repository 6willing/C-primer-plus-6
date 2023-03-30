#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int a = 212;
	int rv;
	rv = printf("%d F is water's boiling point.\n", a);
	printf("Here's one way to print a ");
	printf("long string.\n");
	printf("Here's another way to print a \
long string.\n");
	printf("Here's the newest way to print a""long string.\n");
	return 0;
}