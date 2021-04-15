#include <stdio.h>

int main(void)
{
	int k, h, sum = 0;

	scanf("%d %d", &k, &h);

	if (k % 2 == 1)
		sum += k / 2 + 1;
	else
		sum += k / 2 * 10;

	if (h % 2 == 1)
		sum += h / 2 + 1;
	else
		sum += h / 2 * 10;

	printf("%d\n", sum);

	return 0;
}