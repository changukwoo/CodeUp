#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if ((a - b + c) % 10 == 0)
		printf("���\n");
	else
		printf("�׷�����\n");

	return 0;
}