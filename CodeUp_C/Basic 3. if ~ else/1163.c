#include <stdio.h>

int main(void)
{
	int a, b, c, save = 0;

	scanf("%d %d %d", &a, &b, &c);

	save = (a + b + c) / 100 % 10;

	if (save % 2 == 0)
		printf("���\n");
	else
		printf("�׷�����\n");

	return 0;
}