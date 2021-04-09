#include <stdio.h>

int main(void)
{
	long long int a, m, d, n, sum = 0;

	scanf("%lld %lld %lld %lld", &a, &m, &d, &n);

	sum = a;

	for (int i = 1; i < n; i++)
	{
		sum *= m;
		sum += d;
	}

	printf("%lld\n", sum);

	return 0;
}