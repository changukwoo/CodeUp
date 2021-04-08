#include <stdio.h>

int main(void)
{
	long long int w, h, b;
	double sum = 0.0;

	scanf("%lld %lld %lld", &w, &h, &b);

	sum = w * h * b / 8.0 / 1024.0 / 1024.0;

	printf("%.2lf MB\n", (double)sum);

	return 0;
}