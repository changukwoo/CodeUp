#include <stdio.h>

int main(void)
{
	double h, k, standard = 0, bmi = 0;

	scanf("%lf %lf", &h, &k);

	standard = (h - 100.0) * 0.9;

	bmi = (k - standard) * 100.0 / standard;

	if (bmi <= 10)
		printf("����\n");
	else if (bmi <= 20)
		printf("��ü��\n");
	else
		printf("��\n");

	return 0;
}