#include <stdio.h>

int main(void)
{
	int arr[4];

	for (int i = 0; i < 3; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 3; i++)
	{
		if (arr[i] <= 170)
		{
			printf("CRASH %d\n", arr[i]);

			return 0;
		}
	}

	printf("PASS\n");

	return 0;
}