#include <stdio.h>

int main(void)
{
	int n, arr[51], count = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n - 1; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= n; i++)
	{
		count = 0;

		for (int j = 1; j <= n - 1; j++)
		{
			if (arr[j] == i)
				count++;
		}

		if (count == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}