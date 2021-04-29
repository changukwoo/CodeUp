#include <stdio.h>

int main(void)
{
	int n, arr[101][101] = { 0 }, sum = 1;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j >= 1; j--)
		{
			arr[i][j] += sum;
			sum++;
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