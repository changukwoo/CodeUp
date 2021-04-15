#include <stdio.h>

int main(void)
{
	int arr[11], count = 0;

	for (int i = 1; i <= 10; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= 10; i++)
	{
		if (arr[i] % 5 == 0)
		{
			count++;

			printf("%d\n", arr[i]);

			return 0;
		}

	}

	if (count == 0)
		printf("0\n");

	return 0;
}