#include <stdio.h>

int main(void)
{
	long long int a;

	scanf("%lld", &a);

	while (1)
	{
		printf("%lld\n", --a);

		if (a == 0)
			return 0;
	}
}