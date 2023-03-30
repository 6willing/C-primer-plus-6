#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define BLUBR "Authentic imitation"
int main(void)
{
	printf("[%2s]\n",BLUBR);
	printf("[%24s]\n",BLUBR);
	printf("[%24.5s]\n",BLUBR);
	printf("[%-24.5s]\n",BLUBR);
	return 0;
}