#include <stdio.h>

int main(void)
{
	int n;
	int arr[101];
	int min;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= n; i += 2)
	{
		if (arr[i] < arr[i + 1])
			min = arr[i];
		else
			min = arr[i + 1];

		printf("%d ", min);
	}

	return 0;
}