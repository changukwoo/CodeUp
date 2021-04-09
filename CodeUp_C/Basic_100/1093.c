#include <stdio.h>

int main(void)
{
	int n, arr1[10001], arr2[24] = { 0, };

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr1[i]);

		arr2[arr1[i]] += 1;
	}

	for (int i = 1; i <= 23; i++)
		printf("%d ", arr2[i]);

	printf("\n");
	
	return 0;
}
