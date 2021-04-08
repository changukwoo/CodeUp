#include <stdio.h>

int main(void)
{
	long long int a, sum = 0;

	scanf("%lld", &a);

	for (int i = 1; i <= a; i++)
	{
		sum += i;

		if (sum >= a)
		{
			printf("%d\n", sum);

			return 0;
		}
	}
}