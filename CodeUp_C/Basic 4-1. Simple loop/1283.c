#include <stdio.h>

int main(void)
{
	double a, b, n, sum = 0.0; // a = ������ �׼�, b = ���� �� ��

	scanf("%lf %lf", &a, &b);

	sum = a;

	for (int i = 1; i <= b; i++)
	{
		scanf("%lf", &n);

		sum += sum * (n / 100.0);
	}

	if (a < sum)
	{
		printf("%.0lf\n", sum - a);
		printf("good\n");
	}
	else if (a == sum)
	{
		printf("%.0lf\n", sum - a);
		printf("same\n");
	}
	else
	{
		printf("%.0lf\n", sum - a);
		printf("bad\n");
	}

	return 0;
}