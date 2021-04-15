#include <stdio.h>

int main(void)
{
	long long int n, max, min;

	max = -1000000;
	min = 1000000;

	for (int i = 1; i <= 5; i++)
	{
		scanf("%lld", &n);

		if (max <= n)
			max = n;
		if (min >= n)
			min = n;
	}

	printf("%lld\n%lld\n", max, min);

	return 0;
}