#include <stdio.h>

int main(void)
{
	long long int a, b, sum = 0;

	scanf("%lld %lld", &a, &b);

	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0)
		{
			printf("-%d", i);
			sum -= i;
		}
		else
		{
			if (i == a)
			{
				printf("%d", i);
				sum += i;
			}
			else
			{
				printf("+%d", i);
				sum += i;
			}
		}
	}

	printf("=%d\n", sum);

	return 0;
}