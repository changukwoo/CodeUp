#include <stdio.h>

int main(void)
{
	int a, b, arr[101][101] = { 0 }, sum = 1;

	scanf("%d %d", &a, &b);

	for (int i = a; i >= 1; i--)
	{
		for (int j = b; j >= 1; j--)
		{
			arr[i][j] += sum;
			sum++;
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