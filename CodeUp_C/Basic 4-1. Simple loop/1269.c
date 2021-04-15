#include <stdio.h>

int main(void)
{
	int a, b, c, n, total = 0;

	scanf("%d %d %d %d", &a, &b, &c, &n);

	total = a;

	for (int i = 1; i < n; i++)
		total = total * (b)+c;

	printf("%d\n", total);

	return 0;
}