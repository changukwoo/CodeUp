#include <stdio.h>

int main(void)
{
	int arr[20][20];
	int n, a, b;

	for (int i = 1; i <= 19; i++)
		for (int j = 1; j <= 19; j++)
			scanf("%d", &arr[i][j]);

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 1; j++)
			scanf("%d %d", &a, &b);

		for (int z = 1; z <= 19; z++)
		{
			if (arr[z][b] == 0)
				arr[z][b] = 1;
			else if (arr[z][b] == 1)
				arr[z][b] = 0;
		}

		for (int z = 1; z <= 19; z++)
		{
			if (arr[a][z] == 0)
				arr[a][z] = 1;
			else if (arr[a][z] == 1)
				arr[a][z] = 0;
		}
	}

	for (int i = 1; i <= 19; i++)
	{
		for (int j = 1; j <= 19; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}

	return 0;
}