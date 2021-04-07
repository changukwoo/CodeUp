#include <stdio.h>

int main(void)
{
	long long int a, b;

	scanf("%lld %lld", &a, &b);

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%.2f\n", (float)a / (float)b);

	return 0;
}