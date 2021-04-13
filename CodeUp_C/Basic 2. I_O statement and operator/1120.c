#include <stdio.h>

int main(void)
{
	double a, b, c;

	scanf("%lf %lf %lf", &a, &b, &c);

	printf("%.2lf\n", (a + b + c) / 3.0);

	return 0;
}