#include <stdio.h>

int main(void)
{
	double a;

	scanf("%lf", &a);

	if (a >= 50.0 && a <= 60.0)
		printf("win\n");
	else
		printf("lose\n");

	return 0;
}