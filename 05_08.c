#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	const int persec = 60;
	int sec, min, left;
	printf("���������֣�");
	scanf("%d", &sec);
	while (sec > 0) {
		min = sec / persec;
		left = sec % persec;
		printf("��%d���ӣ�����%d��\n", min, left);
		printf("���������֣�");
		scanf("%d", &sec);
	}
	printf("Done!");
	return 0;
}