#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, max = 0;

	scanf("%lf %lf", &a, &b);

	max = a + b;

	if (a - b > max)
		max = a - b;
	if (a * b > max) // ��, �� �ٲ㵵 ����� ����
		max = a * b;
	if (a / b > max)
		max = a / b;
	if (pow(a, b) > max)
		max = pow(a, b);

	if (b - a > max)
		max = b - a;
	if (b / a > max)
		max = b / a;
	if (pow(b, a) > max)
		max = pow(b, a);

	printf("%lf\n", max);

	return 0;
}