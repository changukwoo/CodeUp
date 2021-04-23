#include <stdio.h>

int main(void)
{
	int k, arr[1001], arr2[1001], temp = 0;

	scanf("%d", &k);

	for (int i = 0; i < k; i++)
	{
		scanf("%d", &arr[i]);

		arr2[i] = arr[i];
	}

	for (int i = 0; i < k; i++) // k¹ø
	{
		for (int q = 0; q < k; q++)
			printf("%d ", arr[q]);

		temp = arr2[0];

		for (int j = 1; j < k; j++)
			arr[j - 1] = arr2[j];

		arr[k - 1] = temp;

		for (int z = 0; z < k; z++)
			arr2[z] = arr[z];

		printf("\n");
	}

	return 0;
}