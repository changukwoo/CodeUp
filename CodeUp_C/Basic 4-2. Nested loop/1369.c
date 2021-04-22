#include <stdio.h>

int main(void)
{
	int n, k;

	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || i == n || j == 1 || j == n)
				printf("*");
			else if (k == 1)
				printf("*");
			else if ((i + j) % k == 1)
				printf("*");
			else
				printf(" ");
		}

		printf("\n");
	}

	return 0;
}