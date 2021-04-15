#include <stdio.h>

int main(void)
{
	int n; // 약수, 오름차순

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			printf("%d ", i);
	}

	printf("\n");

	return 0;
}