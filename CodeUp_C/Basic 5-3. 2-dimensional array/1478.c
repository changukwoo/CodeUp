#include <stdio.h>

int main(void)
{
	int n, m;
	int count = 1;
	int arr[101][101];

	scanf("%d %d", &n, &m);

	for (int num = 0; num < n + m - 1; num++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = m - 1; j >= 0; j--)
			{
				if (i + j == num)
					arr[i][j] = count++;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = m - 1; j >= 0; j--)
			printf("%d ", arr[i][j]);

		printf("\n");
	}

	return 0;
}