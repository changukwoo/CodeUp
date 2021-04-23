#include <stdio.h>

int main(void)
{
	long long int n, arr[10000], i = 0;

	scanf("%lld", &n);

	if (n == 0)
	{
		printf("0\n");

		return 0;
	}
	else if (n == 1)
	{
		printf("1\n");

		return 0;
	}

	while (1)
	{
		arr[i] = n % 2;
		i++;

		n = n / 2;

		if (n <= 1)
		{
			arr[i] = n % 2;
			break;
		}
	}

	for (int j = i; j >= 0; j--)
		printf("%lld", arr[j]);

	printf("\n");

	return 0;
}