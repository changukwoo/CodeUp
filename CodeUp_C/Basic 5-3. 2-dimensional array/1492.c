#include <stdio.h>

int main(void)
{
	int n;
	int arr[2001];
	int sum = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= n; i++)
	{
		sum = 0;

		for (int j = 1; j <= i; j++)
			sum += arr[j];

		printf("%d ", sum);
	}

	return 0;
}