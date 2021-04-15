#include <stdio.h>

int main(void)
{
	int n, count = 0; // ¼Ò¼ö

	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
			count++;
	}

	if (count == 1)
		printf("prime\n");
	else
		printf("not prime\n");

	return 0;
}