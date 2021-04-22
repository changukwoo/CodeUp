#include <stdio.h>

int main(void)
{
	int h, r, count = 1;

	scanf("%d %d", &h, &r);

	for (int q = 1; q <= r; q++)
	{
		count = 1;

		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j < count; j++)
				printf(" ");

			printf("*");

			count++;
			printf("\n");
		}

		count -= 2;

		for (int i = 1; i < h; i++)
		{
			for (int j = 1; j < count; j++)
				printf(" ");

			printf("*");

			count--;
			printf("\n");
		}
	}

	return 0;
}