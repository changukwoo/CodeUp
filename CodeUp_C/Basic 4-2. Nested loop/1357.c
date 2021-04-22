#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n + n - 1; i++)
	{
		if (i <= n)
		{
			for (int j = 1; j <= i; j++)
				printf("*");
		}
		else
		{
			for (int z = 1; z <= (n + n) - i; z++)
				printf("*");
		}

		printf("\n");
	}

	return 0;
}