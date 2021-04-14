#include <stdio.h>

int main(void)
{
	int h, m;

	scanf("%d %d", &h, &m);

	if (h == 0 && m <= 29)
	{
		if (m - 30 < 0)
		{
			m = 60 + (m - 30);

			printf("%d %d\n", 23, m);
		}
		else
			printf("%d %d\n", 23, m - 30);
	}
	else
	{
		if (m - 30 < 0)
		{
			m = 60 + (m - 30);

			printf("%d %d\n", h - 1, m);
		}
		else
			printf("%d %d\n", h, m - 30);
	}

	return 0;
}