#include <stdio.h>

int main(void)
{
	long long int a, r, n, sum = 0;

	scanf("%lld %lld %lld", &a, &r, &n);

	sum = a;

	for (int i = 1; i < n; i++)
		sum *= r;

	printf("%lld\n", sum);

	return 0;
}