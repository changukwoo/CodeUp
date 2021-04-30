#include <stdio.h>

int main(void)
{
	int n, g;
	int arr[101] = { 0 };
	int count = 0;
	int max = -2000;

	scanf("%d %d", &n, &g);

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= n; i += g)
	{
		max = -2000;

		for (int j = i; j <= g + count; j++)
		{
			if (arr[j] > max)
				max = arr[j];

			if (j == n)
				break;
		}

		printf("%d ", max);
		count += g;
	}

	printf("\n");

	return 0;
}