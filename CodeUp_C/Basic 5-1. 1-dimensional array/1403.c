#include <stdio.h>

int main(void)
{
	int k, arr[101];

	scanf("%d", &k);

	for (int i = 0; i < k; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= 2; i++)
	{
		for (int j = 0; j < k; j++)
			printf("%d\n", arr[j]);
	}

	return 0;
}