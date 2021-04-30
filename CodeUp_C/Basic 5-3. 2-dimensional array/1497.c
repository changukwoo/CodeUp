#include <stdio.h>

int main(void)
{
	int n;
	int arr[101];
	int max;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= n; i += 2)
	{
		if (arr[i] < arr[i + 1])
			max = arr[i + 1];
		else
			max = arr[i];

		printf("%d ", max);
	}

	return 0;
}