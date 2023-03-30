#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
	const double SCALE = 0.333;
	double shoe, foot;

	printf("Shoe size (men's) foor length\n");
	shoe = 3;
	while (shoe < 18.5) {
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %15.2f inches\n", shoe, foot);
		shoe++;
	}
	printf("If the shoe fits,wear it.\n");
	return 0;
}