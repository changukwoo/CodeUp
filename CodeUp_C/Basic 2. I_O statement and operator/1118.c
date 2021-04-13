#include <stdio.h>

int main(void)
{
	double a, b;

	scanf("%lf %lf", &a, &b);

	printf("%.1lf\n", a * b / 2);

	return 0;
}