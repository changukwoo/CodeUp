#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int z = 1; z < i; z++)
			printf(" ");

		for (int j = 1; j <= 2; j++)
			printf("*");

		printf("\n");
	}

	return 0;
}