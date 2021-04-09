#include <stdio.h>

int main(void)
{
	int n, arr1[10001], min = 23;
	
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr1[i]);

		if (min >= arr1[i])
			min = arr1[i];
	}

	printf("%d\n", min);

	return 0;
}
