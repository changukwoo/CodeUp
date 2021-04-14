#include <stdio.h>

int main(void)
{
	int arr1[8], arr2[7], count = 0;

	for (int i = 1; i <= 7; i++) // ÃßÃ·¹øÈ£
		scanf("%d", &arr1[i]);

	for (int i = 1; i <= 6; i++) // ÁÖÈñ¹øÈ£
		scanf("%d", &arr2[i]);

	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (arr2[i] == arr1[j])
				count++;
		}
	}

	if (count <= 2)
		printf("0\n");
	else if (count == 3)
		printf("5\n");
	else if (count == 4)
		printf("4\n");
	else if (count == 5)
	{
		for (int i = 1; i <= 6; i++)
		{
			if (arr2[i] == arr1[7])
			{
				printf("2\n");

				return 0;
			}
		}

		printf("3\n");
	}
	else
		printf("1\n");

	return 0;
}