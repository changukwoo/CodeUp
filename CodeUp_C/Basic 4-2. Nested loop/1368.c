#include <stdio.h>

int main(void)
{
	int h, k, count = 0; // 높이, 밑변
	char d; // 방향 정보

	scanf("%d %d %c", &h, &k, &d);

	count = h;

	if (d == 'L')
	{
		for (int i = 1; i <= h; i++)
		{
			for (int z = h; z > count; z--)
				printf(" ");

			for (int j = 1; j <= k; j++)
				printf("*");

			count--;
			printf("\n");
		}
	}
	else
	{
		for (int i = 1; i <= h; i++)
		{
			for (int z = 1; z < count; z++)
				printf(" ");

			for (int j = 1; j <= k; j++)
				printf("*");

			count--;
			printf("\n");
		}
	}

	return 0;
}