#include <stdio.h>

int main(void)
{
	int n, m, count = 0;
	int arr[101][101];

	scanf("%d %d", &n, &m);

	if (n % 2 == 0)
	{
		for (int i = n; i >= 1; i--)
		{
			if (i % 2 == 0)
			{
				for (int j = 1; j <= m; j++)
					arr[i][j] = ++count;
			}
			else
			{
				for (int j = m; j >= 1; j--)
					arr[i][j] = ++count;
			}
		}
	}
	else
	{
		for (int i = n; i >= 1; i--)
		{
			if (i % 2 == 0)
			{
				for (int j = m; j >= 1; j--)
					arr[i][j] = ++count;
			}
			else
			{
				for (int j = 1; j <= m; j++)
					arr[i][j] = ++count;
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}

	return 0;
}