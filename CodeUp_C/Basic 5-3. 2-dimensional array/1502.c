#include <stdio.h>

int main(void)
{
	int n;
	int count1 = 1, count2 = 1;
	int arr[51][51];

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		count1 = count2;

		for (int j = 1; j <= n; j++)
		{
			printf("%d ", count1);
			count1 += n;
		}

		printf("\n");
		count2++;
	}

	return 0;
}