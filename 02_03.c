#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void butler(void);
int main(void)
{
	printf("I will summon the butler function .\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");
	return 0;
}

void butler(void)
{
	printf("You rang,Sir?\n");
}
