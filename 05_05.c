#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define SQUARES 64
int main(void)
{
	const double CROP = 2E16;
	double current, total;
	int cnt = 1;
	printf("square   grains    total   ");
	printf("fraction of \n");
	printf("     added    grains");
	printf("world total\n");
	total = current = 1.0;
	printf("%4d %13.2e %12.2e %12.2e\n", cnt, current, total, total / CROP);
	while (cnt < SQUARES) {
		cnt += 1;
		current *= 2.0;
		total += current;
		printf("%4d %13.2e %12.2e %12.2e\n", cnt, current, total, total / CROP);
	}
	printf("That's all");
	return 0;
}