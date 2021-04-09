#include <stdio.h>

int main(void)
{
	int n, arr1[10001];

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr1[i]);

	for (int i = n; i >= 1; i--)
		printf("%d ", arr1[i]);

	printf("\n");

	return 0;
}