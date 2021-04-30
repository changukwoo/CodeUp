#include <stdio.h>

int main(void)
{
	int n, g;
	int arr[101] = { 0 };
	int count = 0;
	int min = 2000;

	scanf("%d %d", &n, &g);

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= n; i += g)
	{
		min = 2000;

		for (int j = i; j <= g + count; j++)
		{
			if (arr[j] < min)
				min = arr[j];

			if (j == n)
				break;
		}

		printf("%d ", min);
		count += g;
	}

	printf("\n");

	return 0;
}