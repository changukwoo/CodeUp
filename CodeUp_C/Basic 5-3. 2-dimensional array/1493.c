#include <stdio.h>

int main(void)
{
	int n, m;
	int arr[101][101];
	int sum = 0;
	int sum2 = 0;
	int i, j, q, w;


	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			scanf("%d", &arr[i][j]);
	}

	for (i = 1; i <= n; i++)
	{
		sum = 0;

		for (j = 1; j <= m; j++)
		{
			sum += arr[i][j];

			if (i != 1)
			{
				sum2 = 0;

				for (q = 1; q < i; q++)
				{
					for (w = 1; w <= j; w++)
						sum2 += arr[q][w];
				}
			}

			printf("%d ", sum + sum2);
		}

		printf("\n");
	}

	return 0;
}