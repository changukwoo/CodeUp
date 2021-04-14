#include <stdio.h>

int main(void)
{
	int age, year = 0;

	scanf("%d", &age);

	year = 2012 - age + 1;

	if (year < 2000)
		printf("%d %d\n", year % 100, 1);
	else
		printf("%d %d\n", year % 100, 3);

	return 0;
}