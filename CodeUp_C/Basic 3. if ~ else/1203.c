#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n <= 10)
		printf("����\n");
	else if (n <= 20)
		printf("��ü��\n");
	else
		printf("��\n");

	return 0;
}