#include <stdio.h>

int main(void)
{
	int n, count = 0;
	int arr[101][101];

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = n; j >= 1; j--)
				arr[j][i] = ++count;
		}
		else
		{
			for (int j = 1; j <= n; j++)
				arr[j][i] = ++count;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}

	return 0;
}