#include <stdio.h>

int main(void)
{
	long long int n, count = 0, arr[10] = { 0, }, z = 0, pro = 0;

	scanf("%lld", &n);

	for (int i = 2; i < n; i++) // 소수는 1보다 큰 자연수
	{
		count = 0;

		if (n % i == 0) // 약수, i
		{

			for (int j = 2; j <= i; j++)
			{
				if (i % j == 0)
					count++;
			}

			if (count == 1) // 약수 중 소수
			{
				arr[z] = i;
				z++;
			}
		}
	}

	for (int i = 0; arr[i] != 0; i++)
	{
		for (int j = 0; arr[j] != 0; j++)
		{
			if (arr[i] * arr[j] == n)
			{
				printf("%d ", arr[i]);
				printf("%d\n", arr[j]);

				return 0;
			}

		}
	}

	printf("wrong number\n");

	return 0;
}