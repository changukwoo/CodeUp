#include <stdio.h>

int main(void)
{
	int n, a = 1;

	scanf("%d", &n);

	for (int i = 1; i <= n / 2 + 1; i++)
	{
		for (int j = i; j <= n / 2; j++)
			printf(" ");

		for (int z = 1; z <= a; z++)
			printf("*");

		a += 2;
		printf("\n");
	}

	return 0;
}