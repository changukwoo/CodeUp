#include <stdio.h>

int main(void)
{
	int n, a, sum = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a);

		if (a % 5 == 0)
			sum += a;
	}

	printf("%d\n", sum);

	return 0;
}