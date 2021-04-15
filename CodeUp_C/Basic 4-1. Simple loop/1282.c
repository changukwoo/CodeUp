#include <stdio.h>

int main(void)
{
	long long int n, t;

	scanf("%lld", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i * i > n)
		{
			t = i - 1;
			break;
		}
	}

	printf("%lld %lld\n", (n - t * t), t);

	return 0;
}