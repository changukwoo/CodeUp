#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n * 2; i++)
	{
		for (int j = 1; j <= n * 2; j++)
		{
			if (i + j == n + 1 || i == j - n ||
				i + j == n * 3 + 1 || i - j == n)
				printf("*");
			else
				printf(" ");
		}

		printf("\n");
	}

	return 0;
}