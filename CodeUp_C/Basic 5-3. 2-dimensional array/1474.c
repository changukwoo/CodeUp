#include <stdio.h>

int main(void)
{
	int n, m, count = 0, reverse = 1;
	int arr[101][101];

	scanf("%d %d", &n, &m);

	for (int i = m; i >= 1; i--)
	{
		if (reverse == 1)
		{
			for (int j = n; j >= 1; j--)
				arr[j][i] = ++count;
		}
		else
		{
			for (int j = 1; j <= n; j++)
				arr[j][i] = ++count;
		}

		reverse *= -1;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}

	return 0;
}