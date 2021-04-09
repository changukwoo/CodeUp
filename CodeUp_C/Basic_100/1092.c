#include <stdio.h>

int main(void)
{
	long long int a, b, c, day = 1;

	scanf("%lld %lld %lld", &a, &b, &c);

	while (day % a != 0 || day % b != 0 || day % c != 0)
		day++;

	printf("%lld\n", day);

	return 0;
}