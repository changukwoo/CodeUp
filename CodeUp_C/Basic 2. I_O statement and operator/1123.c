#include <stdio.h>

int main(void)
{
	int C;
	double F = 0.0;

	scanf("%d", &C);

	F = 9.0 / 5.0 * (double)C + 32.0;

	printf("%.3lf\n", F);

	return 0;
}