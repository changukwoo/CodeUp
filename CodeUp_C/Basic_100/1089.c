#include <stdio.h>

int main(void)
{
	int a, d, n, sum = 0;

	scanf("%d %d %d", &a, &d, &n);

	sum = a;

	for (int i = 1; i < n; i++)
		sum += d;
	
	printf("%d\n", sum);

	return 0;
}
