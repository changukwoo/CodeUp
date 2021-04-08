#include <stdio.h>

int main(void)
{
	int a, b, c, count = 0;

	scanf("%d %d %d", &a, &b, &c);

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			for (int z = 0; z < c; z++)
			{
				printf("%d %d %d\n", i, j, z);

				count++;
			}
		}
	}

	printf("%d\n", count);

	return 0;
}