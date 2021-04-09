#include <stdio.h>

int main(void)
{
	int n, a, b, arr[20][20] = { 0, };

	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 1; j++)
		{
			scanf("%d %d", &a, &b);

			arr[a][b] = 1;
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
