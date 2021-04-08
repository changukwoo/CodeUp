#include <stdio.h>

int main(void)
{
	long long int a, b;

	scanf("%lld", &a);

	for (int i = 0; i < a; i++)
	{
		scanf("%lld", &b);

		printf("%lld\n", b);
	}

	return 0;
}