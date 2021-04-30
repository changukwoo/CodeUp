#include <stdio.h>

int main(void)
{
	int N;
	int arr[51][51];
	int count = 1;
	int reverse = 1;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		if (reverse == 1)
		{
			for (int j = 1; j <= N; j++)
				arr[i][j] = count++;
		}
		else if (reverse == -1)
		{
			for (int j = N; j >= 1; j--)
				arr[i][j] = count++;
		}

		reverse *= -1;
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}

	return 0;
}