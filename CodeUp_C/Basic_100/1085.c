#include <stdio.h>

int main(void)
{
	long long int h, b, c, s;
	double sum = 0.0;

	scanf("%lld %lld %lld %lld", &h, &b, &c, &s);

	sum = (h * b * c * s) / 8.0;
	sum /= 1024.0;
	sum /= 1024.0;

	printf("%.1lf MB\n", (double)sum);
	
	return 0;
}
