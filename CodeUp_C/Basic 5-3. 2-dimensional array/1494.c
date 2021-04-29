#include <stdio.h>

int main(void)
{
	int n, k; // n : 크기, k : 반복구간
	int arr[101] = { 0 };
	int s, e, u;
	int sum = 0;

	scanf("%d %d", &n, &k);

	for (int i = 1; i <= k; i++)
	{
		scanf("%d %d %d", &s, &e, &u);

		arr[s] = arr[s] + u;
		arr[e + 1] = arr[e + 1] - u;
	}

	for (int i = 1; i <= n; i++)
		printf("%d ", arr[i]);

	printf("\n");

	for (int i = 1; i <= n; i++)
	{
		sum = 0;

		for (int j = 1; j <= i; j++)
			sum += arr[j];

		printf("%d ", sum);
	}

	printf("\n");

	return 0;
}