#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n > 0)
		printf("���\n");
	else if (n == 0)
		printf("0\n");
	else
		printf("����\n");

	return 0;
}