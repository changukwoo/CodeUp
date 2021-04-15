#include <stdio.h>

int main(void)
{
	int n, a, count = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a);

		if (a % 2 == 0)
			count++;
	}

	printf("%d\n", count);

	return 0;
}