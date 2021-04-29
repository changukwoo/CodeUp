#include <stdio.h>

int main(void)
{
	int a, b, count = 0;
	int arr[101][101];

	scanf("%d %d", &a, &b);

	if (a % 2 == 1)
	{
		for (int i = a; i >= 1; i--)
		{
			if (i % 2 == 1)
			{
				for (int j = b; j >= 1; j--)
					arr[i][j] = ++count;
			}
			else
			{
				for (int j = 1; j <= b; j++)
					arr[i][j] = ++count;
			}
		}
	}
	else
	{
		for (int i = a; i >= 1; i--)
		{
			if (i % 2 == 0)
			{
				for (int j = b; j >= 1; j--)
					arr[i][j] = ++count;
			}
			else
			{
				for (int j = 1; j <= b; j++)
					arr[i][j] = ++count;
			}
		}
	}

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}

	return 0;
}