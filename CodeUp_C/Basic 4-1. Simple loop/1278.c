#include <stdio.h>

int main(void)
{
	long long int n, ten = 10, count = 0;

	scanf("%lld", &n);

	while (1)
	{
		if (n / ten == 0)
		{
			count++;

			break;
		}
		else
		{
			ten *= 10;

			count++;
		}
	}

	printf("%lld\n", count);

	return 0;
}