#include <stdio.h>

int main(void)
{
	long long int a, b, c;

	scanf("%lld %lld %lld", &a, &b, &c);

	printf("%d\n", a + b + c);
	printf("%.1lf\n", (a + b + c) / 3.0);

	return 0;
}