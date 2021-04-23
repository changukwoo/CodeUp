#include <stdio.h>

int main(void)
{
	int arr[11];
	int k;

	for (int i = 1; i <= 10; i++)
		scanf("%d", &arr[i]);

	scanf("%d", &k);

	printf("%d\n", arr[k]);

	return 0;
}