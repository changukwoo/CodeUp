#include <stdio.h>

int main(void)
{
	long long int a, b;

	scanf("%lld %lld", &a, &b);

	if (a > b)
		printf("1\n");
	else
		printf("0\n");

	return 0;
}