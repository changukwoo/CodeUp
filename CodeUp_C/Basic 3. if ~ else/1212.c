#include <stdio.h>

int main(void)
{
	int arr[4], temp = 0;

	for (int i = 0; i < 3; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	if (arr[0] < arr[1] + arr[2])
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}