#include <stdio.h>

int main(void)
{
	int n;
	int arr[1001];

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= n; i++)
	{
		printf("%d: ", i);

		for (int j = 1; j <= n; j++)
		{
			if (i != j)
			{
				if (arr[i] > arr[j])
					printf("> ");
				else if (arr[i] == arr[j])
					printf("= ");
				else if (arr[i] < arr[j])
					printf("< ");
			}
		}

		printf("\n");
	}

	return 0;
}