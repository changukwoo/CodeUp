#include <stdio.h>

int main(void)
{
	int n, sum = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sum += i;

		if (sum >= n)
		{
			printf("%d\n", i);

			return 0;
		}
	}
}