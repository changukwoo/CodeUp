#include <stdio.h>

int main(void)
{
	int n, one = 0, ten = 0;

	scanf("%d", &n);

	if (n <= 9)
	{
		if ((2 * (n * 10)) % 100 <= 50)
			printf("%d\nGOOD\n", (2 * (n * 10)) % 100);
		else
			printf("%d\nOH MY GOD\n", (2 * (n * 10)) % 100);
	}
	else
	{
		one = n / 10;
		ten = (n % 10) * 10;

		if (2 * (one + ten) >= 100)
		{
			if ((2 * (one + ten)) % 100 <= 50)
				printf("%d\nGOOD\n", (2 * (one + ten)) % 100);
			else
				printf("%d\nOH MY GOD\n", (2 * (one + ten)) % 100);
		}
		else
		{
			if (2 * (one + ten) <= 50)
				printf("%d\nGOOD\n", 2 * (one + ten));
			else
				printf("%d\nOH MY GOD\n", 2 * (one + ten));
		}
	}

	return 0;
}