#include <stdio.h>

int main(void)
{
	int ymd, g, year = 0;

	scanf("%d %d", &ymd, &g);


	if (g == 1 || g == 2)
	{
		year = 1900 + (ymd / 10000);

		printf("%d\n", 2012 - year + 1);
	}
	else
	{
		year = 2000 + (ymd / 10000);

		printf("%d\n", 2012 - year + 1);
	}

	return 0;
}