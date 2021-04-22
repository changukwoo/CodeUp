#include <stdio.h>

int main(void)
{
	int n, count = 0;

	scanf("%d", &n);

	count = n;

	for (int i = 1; i <= n; i++)
	{
		for (int z = 1; z < count; z++)
			printf(" ");

		for (int j = 1; j <= n; j++)
			printf("*");

		count--;
		printf("\n");
	}

	return 0;
}