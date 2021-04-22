#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 2; j <= 5; j++)
		{
			if (j == 5)
				printf("%d x %d = %2d\n", j, i, i * j);
			else
				printf("%d x %d = %2d\t", j, i, i * j);
		}
	}

	return 0;
}