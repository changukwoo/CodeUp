#include <stdio.h>

int main(void)
{
	long long int a, b;

	scanf("%lld %lld", &a, &b);

	printf("%lld\n", a & b);

	return 0;
}