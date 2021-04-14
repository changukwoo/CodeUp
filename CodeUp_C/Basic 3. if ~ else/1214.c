#include <stdio.h>

int main(void)
{
	int y, m;

	scanf("%d %d", &y, &m);

	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
	{
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			printf("31\n");
		else if (m == 2)
			printf("29\n");
		else
			printf("30\n");
	}
	else
	{
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			printf("31\n");
		else if (m == 2)
			printf("28\n");
		else
			printf("30\n");
	}

	return 0;
}