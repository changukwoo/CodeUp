#include <stdio.h>

int main(void)
{
	double h, k, standard = 0, bmi = 0;

	scanf("%lf %lf", &h, &k);

	if (h < 150)
		standard = (h - 100.0);
	else if (h >= 150 && h < 160)
		standard = (h - 150) / 2 + 50;
	else
		standard = (h - 100) * 0.9;

	bmi = (k - standard) * 100.0 / standard;

	if (bmi <= 10)
		printf("정상\n");
	else if (bmi > 10 && bmi <= 20)
		printf("과체중\n");
	else
		printf("비만\n");

	return 0;
}