#include <stdio.h>

int main(void)
{
	int odd, n, arr[4];

	scanf("%d", &odd);

	for (int i = 1; i <= odd; i++)
	{
		scanf("%d", &n);

		if (i == 1)
			arr[0] = n;
		if (i == odd / 2 + 1)
			arr[1] = n;
		if (i == odd)
			arr[2] = n;
	}

	for (int i = 0; i < 3; i++)
		printf("%d ", arr[i]);

	printf("\n");

	return 0;
}