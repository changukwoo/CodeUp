#include <stdio.h>

int main(void)
{
	double a, b, c, d;

	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

	if (a / b > c / d)
		printf(">\n");
	else if (a / b == c / d)
		printf("=\n");
	else
		printf("<\n");

	return 0;
}